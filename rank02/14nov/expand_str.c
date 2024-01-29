/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:40:00 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 15:40:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	delchar(char *s)
{
	while (*(s + 1))
	{
		*s = *(s + 1);
		s++;
	}
	*s = 0;
}
int	ft_isspace(int c)
{
	return (c == 9 || c == 32);
}
int	main(int argc, char *argv[])
{
	char	*s;

	if (argc != 2)
		return (write(1, "\n", 1));
	s = argv[1];
	while (*s)
	{
		if (ft_isspace(*s) && ft_isspace(*(s + 1)))
			delchar(s);
		else
			s++;
	}
	s = argv[1];
	while (*s && ft_isspace(*s))
		s++;
	while (*s && !ft_isspace(*s) || (ft_isspace(*s) && *(s + 1)))
	{
		if (ft_isspace(*s))
			write(1 , "   ", 3);
		else
			write(1, s, 1);
		s++;
	}		
	write(1, "\n", 1);
	return (0);
}