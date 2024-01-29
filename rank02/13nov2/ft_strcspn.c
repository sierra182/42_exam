/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:19:31 by svidot            #+#    #+#             */
/*   Updated: 2023/11/13 15:28:15 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len;
	char	*r;

	r = reject;
	len = 0;
	while (s[len])
	{
		reject = r; 
		while (*reject)
		{
			if (s[len] == *reject)
				return (len) ;
			reject++;
		}
		len++;
	}
	return (len);
}