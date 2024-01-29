/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:28:35 by seblin            #+#    #+#             */
/*   Updated: 2023/11/10 19:41:38 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*s;
	char	ex;
	char 	new;
	
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		s = argv[1];
		ex = *argv[2];
		new = *argv[3];		
		while (*s)
		{
			if (*s == ex)
				*s = new;
			write(1, s, 1);
			s++;
		}
	}
	write(1, "\n", 1)
;	return (0);
}