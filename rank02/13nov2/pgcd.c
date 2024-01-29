/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:29:49 by svidot            #+#    #+#             */
/*   Updated: 2023/11/13 15:52:56 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int	a;
	int	b;
		
	if (argc != 3)
		return (write(1, "\n", 1));
	a = atoi(argv[1]);	
	b = atoi(argv[2]);	
	while (a > 0 && b > 0 && a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
		if (a == b)
			printf("%d", a);		
	}
	return printf("\n");
}