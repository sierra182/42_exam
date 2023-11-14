/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:07:09 by svidot            #+#    #+#             */
/*   Updated: 2023/11/14 10:23:47 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int i;

	if (!a || !b)
		return (0);
	if (a > b)
		i = a;
	else
		i = b;
	while (i)
	{
		if (!(i % a) && !(i % b))		
			return (i);		
		i++;	
	}
	return (0);
}
  
// #include <stdio.h>
// int main (void)
// {
// 	printf("%d", lcm(0, 42));
// 	return (0);
// }