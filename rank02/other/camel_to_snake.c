/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:08:57 by seblin            #+#    #+#             */
/*   Updated: 2023/11/09 11:18:33 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*s;
	
	if (argc == 2)
	{
		s = argv[1];
		while (*s)
		{
			if (*s >= 'A' && *s <= 'Z')
			{
				write(1, "_", 1);
				*s += 32;				
			}
			write(1, s++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}