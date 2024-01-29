/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:17:37 by seblin            #+#    #+#             */
/*   Updated: 2023/11/09 09:08:17 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;
	
	if (!a || !b)
		return (0);
	if (a > b)
		i = a;
	else
		i = b;	
	while (i++)	
		if (!(i % a) && !(i % b))
			break ;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", lcm(21, 6));
	return (0);
}