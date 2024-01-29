/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 08:43:49 by seblin            #+#    #+#             */
/*   Updated: 2023/11/10 09:56:50 by seblin           ###   ########.fr       */
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

void	del_allchar(char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			delchar(s);
		s++;
	}
}
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		while (*s1)
		{
			s2 = argv[2];
			while (*s2)
			{
				if (*s1 == *s2)
				{
					write(1, s1, 1);
					del_allchar(s2, *s1);
				}
				s2++;
			}
			s1++;
		}		
	}
	return (write(1, "\n", 1));
}