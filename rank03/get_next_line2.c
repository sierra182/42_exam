/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:22:19 by seblin            #+#    #+#             */
/*   Updated: 2024/01/30 11:13:58 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

//#include <stdio.h> //! 

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s[i])	
		i++;
	return (i);
}
char	*ft_strndup(char *s1, int n)
{
	char	*s2;
	int		i;
			
	i = 0;	
	while (s1[i] && n - i)
		i++;
	s2 = (char *) malloc(sizeof(char) * (i + 1));
	i = -1;
	while (s1[++i] && n - i)
		s2[i] = s1[i];
	s2[i] = 0;
	return (s2);	
}

char	*ft_strjoin(char *s1, char *s1_sav, char *s2)
{
	char	*s3;
	int		i;
	int		j;
		
	i = ft_strlen(s1);
	j = ft_strlen(s2);	
	s3 = (char *) malloc(sizeof(char) * (i + j + 1));
	i = -1;
	while (s1[++i])	
		s3[i] = s1[i];
	j = -1;
	while (s2[++j])
		s3[i + j] = s2[j];
	s3[i + j] = 0;
	free(s1_sav);
	return (s3);	
}

int	ft_search_nl(char *buffer)
{
	int	i;

	i = -1;
	while (buffer[++i])	
		if (buffer[i] == '\n')
			return (i);	
	return (-1);
}

void	ft_init(char *buffer)
{
	int	i;

	i = -1;
	while (++i < BUFFER_SIZE + 1)
		buffer[i] = 0;
}

char *get_next_line(int fd)
{
	static char	*buffer;
	static char	*buffer_sav;
	char		new_buffer[BUFFER_SIZE + 1];
	char		*line;
	int			read_len;
	int			new_line;

	if (!buffer)
	{
		buffer = (char *) malloc((sizeof(char) * (BUFFER_SIZE + 1)));
		ft_init(buffer);
		buffer_sav = buffer;
	}
	ft_init(new_buffer);
	new_line = ft_search_nl(buffer);
	while (new_line < 0)
	{
		read_len = read(fd, new_buffer, BUFFER_SIZE);
		if (read_len > 0)
		{
			new_buffer[read_len] = 0;
			buffer = ft_strjoin(buffer, buffer_sav, new_buffer);
			buffer_sav = buffer;
			if (ft_search_nl(buffer))
				break ;
		}
		else if (!read_len && *buffer)
		{		
			line = ft_strndup(buffer, ft_strlen(buffer));
			*buffer = 0;
			return (line);		
		}
		else
		{
			free(buffer_sav);
			return (NULL);
		}
	}
	line = ft_strndup(buffer, ft_search_nl(buffer) + 1);
	buffer += ft_search_nl(buffer) + 1;
	return (line);
}

// int	main(void)
// {
// 	char	*line;
// 	int		fd;

// 	fd = open("test.txt", O_RDONLY);
// 	while (1)
// 	{
// 		line = get_next_line(fd);
// 		if (!line)
// 			break;
// 		printf("%s", line);
// 		free(line);		
// 	}
// 	close(fd);
// }