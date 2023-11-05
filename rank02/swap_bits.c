/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 09:12:19 by seblin            #+#    #+#             */
/*   Updated: 2023/11/05 09:48:46 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_bits.c"

unsigned char	swap_bits2(unsigned char octet)
{
	unsigned char	swap;
	int				i;
	
	swap = 0;	
	i = 8 / 2;
	while (i--)	
		swap = swap << 1 | (octet >> i & 1);
	i = 8;
	while (i-- > 8 / 2)	
		swap = swap << 1 | (octet >> i & 1);	
	return (swap);	
}
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet << 4) | (octet >> 4));
}

int main(void)
{
	print_bits(swap_bits(99));	
	return (0);
}