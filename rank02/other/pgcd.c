/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:57:34 by svidot            #+#    #+#             */
/*   Updated: 2023/11/08 14:35:08 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	n1;
	int	n2;	
	int i;
	
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	if (argc == 3 && n1 > 0 && n2 > 0)
	{		
		i = n1 + 1;		
		while (i--)		
			if (n1 % i == 0 && n2 % i == 0)
				return (printf("%d\n", i));	
	}
	printf("\n");
	return (0);
}

int main(int argc, char *argv[])
{
	int	n1;
	int	n2;
	
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);	
	if (argc == 3 && n1 > 0 && n2 > 0)
	{
		while (n1 != n2)
			if (n1 > n2)
				n1 -= n2;
			else 
				n2 -= n1;
		printf("%d", n1);	
	}
	printf("\n");
	return (0);
}
