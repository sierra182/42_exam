/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:43:06 by svidot            #+#    #+#             */
/*   Updated: 2023/11/11 11:06:57 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

int	ft_isspace(int c)
{
	return (c == 9 || c == 32);
}
int	main(int argc, char *argv[])
{
	char	*s;
	int		s_len;
	int		let;
	int		i;
	
	if (argc != 2)
		return (write(1, "\n", 1));	
	let = 0;
	s = argv[1];
	s_len = ft_strlen(s);	
	while (--s_len >= 0)
	{	
		if (!ft_isspace(s[s_len]))
			let++;	
			
		if ((ft_isspace(s[s_len]) || !s_len) && let)
		{		
			i = 0;
			if (ft_isspace(s[s_len]))
			{				
				while (let)
				{
					write(1, &s[s_len + ++i], 1);
					let--;
				} 
				let = 0;
				write(1, " ", 1);				
			}				
			
			if (!s_len)
			{
				while (let)
				{
					write(1, &s[s_len + i++], 1);
					let--;
				}	
				let = 0;	
			}			
		}					
	}
	write(1, "\n", 1);
	return (0);
}