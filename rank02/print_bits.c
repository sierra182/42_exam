/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:07:45 by seblin            #+#    #+#             */
/*   Updated: 2023/11/04 19:37:45 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 8;
	while (i--)
		write(1, &(unsigned char) {(octet >> i & 1) + 48}, 1);	
}

int main(void)
{
	print_bits(2);
	return (0);
}