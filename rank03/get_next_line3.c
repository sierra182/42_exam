/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:25:49 by seblin            #+#    #+#             */
/*   Updated: 2024/01/30 18:27:12 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_search_nl(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (*s == '\n')
			return (i);
	return (-1);
}

void	ft_init(char *s)
{
	int	i;
	
	i = 0;
	while (i < BUFFER_SIZE + 1)
		s[i++] = 0;
}

char	*ft_strjoin(char *s1, char *s1_sav, char *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s3 = (char *) malloc (sizeof(char) * (i + j + 1));
	if (!s3)
	{
		free(s1_sav);
		return (NULL);
	}
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

char	*ft_strndup(char *s1, int n)
{
	char 	*s2;
	int		i;

	i = 0;
	while (s1[i] && n - i)
		i++;
	s2 = (char *) malloc (sizeof(char) * (i + 1));
	if (!s2)
		return (NULL);
	i = -1;
	while (s1[++i] && n - i)	
		s2[i] = s1[i];
	s2[i] = 0;
	return (s2);	
}

char	*get_next_line(int fd)
{
	static char *buffer;
	static char *buffer_sav;
	char		*line;
	int			read_len;
	int			new_line;
	char		new_buffer[BUFFER_SIZE + 1];
	
	if (!buffer)
	{
		buffer = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1));
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
			if(!buffer)
				return (NULL);
			buffer_sav = buffer;
			new_line = ft_search_nl(buffer);				
		}
		else if (!read_len && *buffer)
		{
			line = ft_strndup(buffer, ft_strlen(buffer));
			if (!line)
			{
				free(buffer_sav);	
				return (NULL);
			}
			*buffer = 0;
			return (line);
		}
		else{
			free(buffer_sav);
			return (NULL);
		}
	}
	line = ft_strndup(buffer, ft_search_nl(buffer) + 1);
	if (!line)
	{
		free(buffer_sav);
		return (NULL);
	}
	buffer += ft_search_nl(buffer) + 1;
	return (line);
}