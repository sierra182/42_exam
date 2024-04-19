/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:57:19 by seblin            #+#    #+#             */
/*   Updated: 2024/04/19 20:19:19 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

int	display_err(char *err)
{
	while (*err)
		write(2, err++, 1);
	return (1);
}

int	set_pipe(int pipe_fd[], int i)
{
	if (dup2(pipe_fd[i], i) < 0
		|| close(pipe_fd[0]) < 0 || close(pipe_fd[1]) < 0)
		return (display_err("error: fatal\n"));
	return (0);		
}

int	child(char *cmd[], char *cmd_end[], int pipe_fd[], char *envp[])
{
	if (*pipe_fd && set_pipe(pipe_fd, 1))
		return (1);
	*cmd_end = 0;
	execve(*cmd, cmd, envp);
	return (display_err("error: cannot execute "),	
			display_err(*cmd), display_err("\n"));
}

int	parent(pid_t pid, int pipe_fd[])
{
	int	state;
	
	if (*pipe_fd && set_pipe(pipe_fd, 0))
		return (1);
	waitpid(pid, &state, 0);
	return (WIFEXITED(state) && WEXITSTATUS(state));
}

int	nurcery(char *cmd[], char *cmd_end[], char *envp[])
{
	int		pipe_fd[2] = {0};
	pid_t	pid;

	if (*cmd_end && !strcmp(*cmd_end, "|") && pipe(pipe_fd) < 0)
		return (display_err("error: fatal\n"));
	pid = fork();
	if (!pid)
		return (child(cmd, cmd_end, pipe_fd, envp));
	return parent(pid, pipe_fd);	
}	

int	cd(char *cmd[], char *cmd_end[])
{
	if (cmd_end - cmd != 2)
		return (display_err("error: cd: bad arguments\n"));
	else if (chdir(*++cmd) < 0)
		return (display_err("error: cd: cannot change directory to "),
				display_err(*cmd), display_err("\n"));				
	return (0);
}

char	**forward(char *cmd[])
{
	while (*cmd && strcmp(*cmd, ";") && strcmp(*cmd, "|"))
		cmd++;
	return (cmd);
}

int	main(int argc, char *argv[], char *envp[])
{
	int		state;
	char	**cmd;
	char	**cmd_end;

	if (argc <= 1)
		return (0);
	cmd = argv;
	while (*cmd && *++cmd)
	{
		cmd_end = forward(cmd);
		if (!strcmp(*cmd, "cd"))
			state = cd(cmd, cmd_end);
		else if (cmd != cmd_end)
			state = nurcery(cmd, cmd_end, envp);
		cmd = cmd_end;	
	}	
	return (state);
}
