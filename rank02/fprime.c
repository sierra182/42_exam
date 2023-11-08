/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:38:30 by seblin            #+#    #+#             */
/*   Updated: 2023/11/08 20:29:28 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	is_prime(int nbr)
{
	int	i;

	i = 2;
	if (nbr < 2)
		return (0);
	while (i * i <= nbr)
		if (!(nbr % i++))
			return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	nbr;
	int	res;
	int	i;
	
	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		i = nbr;
		if (i == 1)
			printf("1");
		while (--i)
		{
			res = nbr / i;
			if (!(nbr % i) && is_prime(res))
			{
				printf("%d", res);
				nbr = i;	
				if (i > 1)		
					printf(" * ");					
			}			
		}	
	}
	return (printf("\n"));
}