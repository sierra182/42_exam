/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:28:00 by seblin            #+#    #+#             */
/*   Updated: 2024/04/16 09:43:45 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int	display_error(char *err)
{
	while (*err)
		write(2, err++, 1);
	return (1);
}

int set_pipe(int pipe_fd[], int i)
{	
	if (dup2(pipe_fd[i], i) < 0
		|| close(pipe_fd[0]) < 0
		|| close(pipe_fd[1]) < 0)
		return (display_error("error: fatal\n"));
	*pipe_fd = 0;
	return (0);
}

int	parent(pid_t pid, int pipe_fd[])
{
	int	status;
	
	waitpid(pid, &status, 0);
	if (*pipe_fd && set_pipe(pipe_fd, 0))
		return (1);
	return (WIFEXITED(status) && WEXITSTATUS(status));
}

int child(char *cmd[], char *cmd_end[], char *envp[], int pipe_fd[])
{		
	*cmd_end = 0;
	if (*pipe_fd && set_pipe(pipe_fd, 1))
		return (1);
	execve(*cmd, cmd, envp);
	return (display_error("error: cannot execute "),
			display_error(*cmd), display_error("\n")); 
}

int cd(char *cmd_start[], char *cmd_end[])
{
	if (cmd_end - cmd_start != 2)
		return (display_error("error: cd: bad arguments\n"));
	else if (chdir(*++cmd_start) < 0)
		return (display_error("error: cd: cannot change directory to "),
				display_error(*cmd_start), display_error("\n"));
	return (0);	
}

char	**forward(char **cmd_start)
{
	while (*cmd_start && **cmd_start && strcmp(*cmd_start, ";") && strcmp(*cmd_start, "|"))
		cmd_start++;			
	return (cmd_start);
}

int	nurcery(char *argv[], char *envp[])
{
	pid_t	pid;
	int		pipe_fd[2] = {0};
	int		state;	
	char	**cmd_start;
	char	**cmd_end;

	while (argv && *argv && *++argv)
	{
		cmd_start = argv;
		cmd_end = forward(cmd_start);
		if (*cmd_end && !strcmp(*cmd_end, "|"))
		{
			if (pipe(pipe_fd) < 0)
			{
				state = display_error("error: fatal\n");
				continue ;
			}			
		}	
		if (*cmd_start != *cmd_end && strcmp(*cmd_start, "cd"))
		{			
			pid = fork();
			if (!pid)
				state = child(cmd_start, cmd_end, envp, pipe_fd);
			else
				state = parent(pid, pipe_fd);	
		}
		else if (*cmd_start != *cmd_end)
			state = cd(cmd_start, cmd_end);
		argv = cmd_end;
	}
	return (state);
}

int	main(int argc, char *argv[], char *envp[])
{
	int	last_state;
	
	last_state = 0;
	if (argc > 1)
		last_state = nurcery(argv, envp);
	return (last_state);	
}
