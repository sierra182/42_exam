/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:02:48 by seblin            #+#    #+#             */
/*   Updated: 2023/11/09 18:36:55 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char *s)
{
	return (*s == 9 || *s == 32);
}

int	main(int argc, char *argv[])
{
	char	*s;
	int		flag;
	
	if (argc == 2)
	{
		flag = 0;
		s = argv[1];
		while(*s)
		{
			if (!ft_isspace(s) && ++flag || 
				(flag && ft_isspace(s) && !ft_isspace(s + 1) && *(s + 1)))
				write(1, s, 1);	
			s++;	
		}	
	}	
	return (write(1, "\n", 1));
}