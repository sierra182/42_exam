/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:31:08 by svidot            #+#    #+#             */
/*   Updated: 2023/11/13 12:05:10 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;
	
	int 	count;
	int		s1_len;
	if (argc != 3)
		return (write(1, "\n", 1));
	count = 0;
	s1_len = 0;
	s1 = argv[1];
	s2 = argv[2];	
	while(s1[s1_len])
	{	
		while (*s2)
		{
			if (s1[s1_len] == *s2)
			{
				count++;
				break ;				
			}
			s2++;
		}
		s1_len++;
	}
	if (count == s1_len)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
	return (0);
}