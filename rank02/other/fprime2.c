/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:48:21 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 19:48:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isprime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i * i <= n)	
		if (!(n % i++))
			return (0);	
	return (1);
}

int	main(int argc, char *argv[])
{
	int	nbr;
	int	i;

	if (argc != 2)
		return (printf("\n"));
	nbr = atoi(argv[1]);
	if(nbr <= 0)
		return (printf("\n"));	
	i = 1;
	while (++i < nbr)
	{
		if (!(nbr % i) && ft_isprime(i))
		{
			printf("%d", i);
			nbr /= i;
			if (nbr > 1)			
				printf("*");
			i = 1;
		}		
	}
	printf("%d\n", nbr);
	return (0);
}