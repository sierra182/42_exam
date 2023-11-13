/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:09:07 by svidot            #+#    #+#             */
/*   Updated: 2023/11/13 13:40:59 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int nbr)
{
	int	i;
	
	if (nbr <= 1)
		return (0);
	i = 2;
	while (i * i <= nbr)
	{
		if (!(nbr % i))
			return (0);	
		i++;
	}	
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	nbr;

	if (argc != 2)	
		return (printf("\n"));	
	nbr = atoi(argv[1]);
	if (nbr <= 1)
		return (printf("\n"));	
	i = 1;
	while (nbr != 1)
	{
		if (!(nbr % i) && is_prime(i))
		{
			
			printf("%d", i);
			nbr /= i;
			if (nbr > 1)
				printf("*");
			i = 1;			
		}
		i++;
	}
	printf("\n");
	return (0);
}