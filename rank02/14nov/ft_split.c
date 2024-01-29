/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:18:15 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 16:18:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isspace(int c)
{
	return (c == 9 || c == 10 || c == 32);
}
char    **ft_split(char *str)
{
	char	**split;
	char	*split_save;
	char	*str_save;
	int		flag;
	int 	words;
	int		i;

	str_save = str;
	words = 0;	
	while (*str)
	{
		flag = 0;
		while ((*str && !ft_isspace(*str++) && ++flag) || flag && words++ < 0)
			;
	}
	split = (char **) malloc (sizeof(char *) * (words + 1));
	split[words] = NULL;
	str = str_save;
	while (*str)
	{
		flag = 0;
		while (str[flag] && !ft_isspace(str[flag]) && ++flag)
			;	
		if (flag)
		{
			*split = (char *) malloc (sizeof(char) * (flag + 1));	
			split_save = *split;				
			while (flag--)			
				*(*split)++ = *str++;			
			**split = 0;
			*split = split_save;
			split++;	
			str--;		
		}
		str++;
	}
	return (split - words);
}

// #include <stdio.h>
// int	main()
// {
// 	char	**split;

// 	split = ft_split("   sp  ftyhh g  ");
// 	while (*split)
// 		printf("%s\n", *split++);	
// }

