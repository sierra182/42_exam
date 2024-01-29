/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:46 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 15:00:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(int c)
{
	return (c == 9 | c == 32);
}
int	main(int argc, char *argv[])
{
	char	*s;

	if (argc != 2 || !*argv[1])
		return (write(1, "\n", 1));
	s = argv[1];
	while (*s && ft_isspace(*s))	
		s++;
	while (*s && !ft_isspace(*s))	
		write(1, s++, 1);
	write(1, "\n", 1);
	return (0);	
}
