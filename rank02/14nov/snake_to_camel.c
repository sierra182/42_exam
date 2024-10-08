/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:12:54 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 15:12:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	char	*s;

	if (argc != 2)
		return (write(1, "\n", 1));
	s = argv[1]; 
	while (*s)
	{
		if (*s == '_')
		{
			s++;
			*s -= 32;
		}
		write(1, s++, 1);			
	}	
	write (1, "\n", 1);
	return (0);
}