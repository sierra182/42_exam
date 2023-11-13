/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:09:50 by svidot            #+#    #+#             */
/*   Updated: 2023/11/13 10:24:41 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *s)
{
	int i;
	
	i = 0;
	while(s[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	char	*s;
	int		i;
	
	if (argc != 2)	
		return (write(1, "\n", 1));
	s = argv[1];
	i = ft_strlen(s);
	while (--i >= 0)
		write(1, &s[i], 1);
	write(1, "\n", 1);		
	return (0);
}