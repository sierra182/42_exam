/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:05:06 by seblin            #+#    #+#             */
/*   Updated: 2023/11/09 13:53:45 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(char *s)
{
	size_t	len;
	
	len = 0;
	while (*s++)
		len++;
	return (len);
}

int	main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;	
	int		count;
	
	if (argc == 3)
	{		
		s1 = argv[1];
		s2 = argv[2];
		count = ft_strlen(s1);		
		while (*s1)
		{
			while (*s2)						
				if (*s1 == *s2++)
				{
					count--;
					break;	
				}			
			s1++;
		}	
		if (!count)
			while (*argv[1])
				write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}