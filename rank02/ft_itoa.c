/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:41:24 by seblin            #+#    #+#             */
/*   Updated: 2023/11/10 21:49:13 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	calculate_size(long int n)
{
	int	i;

	i = 1;
	while (n > 9 && ++i)
		n /= 10;
	return (i);
}

char	*ft_itoa(int nbr)
{
	long int	n;	
	char		*s;
	int		size;
	int			i;

	i = 0;
	n = (long int) nbr;
	if (n < 0 && ++i)
		n = -n;
	size = calculate_size(n);
	s = (char *) malloc(sizeof(char) * (size + i + 1));
	s[size + i] = 0;
	s[0] = '-';		
	while (n > 9)
	{
		s[--size + i] = n % 10 + 48;
		n /= 10;	
	}
	s[i] = n + 48;
	return (s);
}

// #include <unistd.h>

// int	main(void)
// {
// 	int		i;
// 	char	*s;
	
// 	i = -420;
// 	s = ft_itoa(i);
// 	while (*s)
// 		write(1, s++, 1);	
// 	return (0);
// }