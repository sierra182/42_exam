/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:50:48 by svidot            #+#    #+#             */
/*   Updated: 2023/11/11 09:24:20 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;
	
	if (!a || !b)
		return (0);
	lcm =  1;
	while (lcm++)	
		if (!(lcm % a) && !(lcm % b))
			break;
	return (lcm);		
}

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned int	a;
// 	unsigned int	b;
	
// 	a = 1;
// 	b = 2;
// 	printf("%d\n", lcm(a, b));
// }