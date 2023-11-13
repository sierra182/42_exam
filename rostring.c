/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:54:46 by svidot            #+#    #+#             */
/*   Updated: 2023/11/13 17:21:38 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isspace(int c)
{
	return (c == 9 || c == 32);
}
int	main(int argc, char *argv[])
{
	char	*s;
	int		flag;
	
	flag = 0;
	if (argc < 2)
		return (write(1, "\n", 1));
	s = argv[1];	
	while (*s && ft_isspace(*s))
		s++;
	while (*s && !ft_isspace(*s))
		s++;
	while (*s && ft_isspace(*s))
		s++;
	while (*s)
	{
		if (!ft_isspace(*s) && ++flag)
			write(1, s, 1);
		if (ft_isspace(*s) && !ft_isspace(*(s + 1)) && *(s + 1))		
			write(1, s, 1);		
		s++;
	}
	s = argv[1];	
	while (*s && ft_isspace(*s))
		s++;
	if (flag)
		write(1, " ", 1);
	while (*s && !ft_isspace(*s))	
		write(1, s++, 1);
	write(1, "\n", 1);			
	return (0);
}