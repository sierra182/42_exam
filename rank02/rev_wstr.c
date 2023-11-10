/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:43:25 by seblin            #+#    #+#             */
/*   Updated: 2023/11/09 23:12:19 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	return (c == 9 || c == 32);
}
int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*s;
	int		i;
	int		j;
	int		letter;
		
	if (argc == 2)
	{
		j = 0;
		letter = 0;
		s = argv[1];
		i = ft_strlen(s);				
		while (--i >= 0)
		{//printf("%d\n", letter);
			if (!ft_isspace(s[i]))
				letter++;			
			if (!ft_isspace(s[i]) && (ft_isspace(s[i - 1]) || !i))
			{printf("%d\n", letter);
				j = 0;
				if (!i)
				{
					//letter++;
					while (letter--)
						write(1, &s[i + j++], 1);
				}
				else
				{
					//letter += 2;
					while (letter--)
						write(1, &s[i + j++], 1);
					write(1, " ", 1);
				}
				letter = 0;
				//printf("%d\n", letter);
			}
			
		}
	}
	return (write(1, "\n", 1));
}