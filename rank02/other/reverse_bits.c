/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:18:05 by seblin            #+#    #+#             */
/*   Updated: 2023/11/04 22:12:41 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_bits.c"

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	rev;
	int				i;
	
	rev = 0;
	i = -1;
	while (++i < 8)
		rev = rev << 1 | (octet >> i & 1); 		
	return (rev);
}

int main(void)
{
	print_bits(reverse_bits(99));	
	return (0);
}