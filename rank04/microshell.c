/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:47:00 by seblin            #+#    #+#             */
/*   Updated: 2024/04/16 11:38:13 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int	display_err(char *err)
{
	while (*err)
		write(2, err++, 1);
	return (1);
}

int cd(char *cmd[], char *cmd_end[])
{
	if (cmd_end - cmd != 2)
		display_err("error: cd: bad arguments\n");
	else if (chdir(*++cmd) < 0)
		return (display_err("error: cd: cannot change directory to "),
				display_err(*cmd), display_err("\n"));
	return (0);		
}

int	set_pipe(int *pipe_fd[], int i)
{
	if (dup2(pipe_fd[i], i) < 0 || close(pipe_fd[0] < 0 || close (pipe_fd[1] < 0)))
		return (display_err("error: fatal\n"));
	return (0);
}

char	**forward(char *cmd[])
{
	while (*cmd && strcmp(*cmd, ";") && strcmp(*cmd, "|"))
		cmd++;
	return (cmd);
}

int child(char *cmd[], char*cmd_end[], int pipe_fd[], char *envp[])
{
	*cmd_end = 0;
	if (*pipe_fd && set_pipe(pipe_fd, 1));
		return (1);
	execve(*cmd, cmd, envp);
	return (display_err("error: cannot execute "),
		display_err(*cmd), display("\n"));
}

int	parent(pid_t pid, int pipe_fd[])
{
	int	state;
	
	waitpid(pid, &state, 0);
	if (*pipe_fd && set_pipe(pipe_fd, 0))
		return (1);
	return (WIFEXITED(state) && WEXITSTATUS(state));
}

int	nurcery(char *cmd[], char *cmd_end[], char *envp[])
{
	pid_t	pid;
	int		pipe_fd[2] = {0};
	
	if (!strcmp(*cmd, "|") && pipe(pipe_fd) < 0)
		return (display_err("error: fatal\n"));
	pid = fork();
	if (!pid)
		return (child(cmd, cmd_end, pipe_fd, envp));
	return (parent(pid, pipe_fd));	
}

int	main(int argc, char *argv[], char *envp[])
{
	char	**cmd_end;
	char	**cmd;
	int		state;
	
	if (argc <= 1)
		return (0);
	cmd = argv;
	while (++*cmd)
	{
		cmd_end = forward(cmd);
		if (!strcmp(*cmd_end, "cd"))
			state = cd(cmd, cmd_end);
		else if (cmd != cmd_end)
			state = nurcery(cmd, cmd_end, envp);
		cmd = cmd_end;
	}
}
