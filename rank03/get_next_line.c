/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:47:28 by seblin            #+#    #+#             */
/*   Updated: 2024/01/30 10:15:00 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

//#include <stdio.h>//! WARNING 

#ifndef BUFFER_SIZE
	# define BUFFER_SIZE 420
#endif

int	search_nl(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strndup(char *s1, int n)
{
	char *s2;
	int	i;

	i = 0;
	while (s1[i] && n - i)	
		i++;	
	s2 = (char *) malloc(sizeof(char) * (i + 1));
	i = 0;
	while(s1[i] && n - i)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = 0;
	return (s2);	
}

char	*ft_strjoin(char *s1, char *to_free, char *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s3 = (char *) malloc (sizeof(char) * (i + j + 1));
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++; 
	}
	j = 0;
	while (s2[j])
	{
		s3[i + j] = s2[j];	
		j++;
	}
	s3[i + j] = '\0';
	free(to_free);
	return (s3);	
}
void	ft_init(char *buffer)
{
	int	i;

	i = 0;
	while (i < BUFFER_SIZE + 1)
		buffer[i++] = 0;
}
char *get_next_line(int fd)
{
	static char	*buffer;
	static char	*buffer_sav;
	char		new_buff[BUFFER_SIZE + 1];
	char		*line;
	int			rd_len;
	int			new_line;
	
	if (!buffer)
	{
		buffer = (char *) malloc(sizeof(char) * BUFFER_SIZE + 1);
		ft_init(buffer);
		buffer_sav = buffer;
	}
	new_line = search_nl(buffer);
	while (new_line == -1)
	{	
		ft_init(new_buff);	
		rd_len = read(fd, new_buff, BUFFER_SIZE);
		new_buff[BUFFER_SIZE] = '\0';
		if (rd_len > 0)
		{			
			buffer = ft_strjoin(buffer, buffer_sav, new_buff);
			buffer_sav = buffer;	
			if (search_nl(new_buff) != -1)
				break;		
		}
		else if (rd_len < 0)
		{			
			return (NULL);
		}
		else
		{
			if (*buffer)
			{
				line = ft_strndup(buffer, ft_strlen(buffer));
				*buffer = 0;
				return (line);
			}
			free(buffer_sav);		
			return (NULL);
		}		
	}
	line = ft_strndup(buffer, search_nl(buffer) + 1);
	buffer += search_nl(buffer) + 1;
	return (line);	
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*line;
// 	int		fd;	

// 	fd = open("test.txt", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		perror("fd");
// 		return (1);
// 	}	
// 	while (1)
// 	{
// 		line = get_next_line(fd);
// 		if (!line)		
// 			break ;
// 		printf("%s", line);
// 		free(line);
// 	}
// 	printf("\n end \n");
// 	close(fd);
// }