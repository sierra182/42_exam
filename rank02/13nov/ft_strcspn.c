/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:27:56 by svidot            #+#    #+#             */
/*   Updated: 2023/11/13 10:57:46 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t len;
	int		i;
		
	len = 0;	
	while (*s)
	{
		i = 0;
		while (reject[i])
		{
			if (*s == reject[i])
				return (len);
			i++;
		}
		len++;
		s++;
	}
	return (len);
}