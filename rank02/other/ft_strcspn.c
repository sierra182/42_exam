/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:27:21 by seblin            #+#    #+#             */
/*   Updated: 2023/11/09 12:58:08 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t		len;
	const char	*rjct_save;
	
	len = 0;
	rjct_save = reject;
	if (!s || !reject)
		return (0);
	while (*s)
	{
		reject = rjct_save;
		while (*reject)
		{
			if (*s == *reject)
				return (len);
			reject++;
		}
		len++;
		s++;
	}
	return (len);
}

#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*rjct;
	
	s = "bravo mon dodo";
	rjct = "zzboe";
	printf("%zu", strcspn(NULL, rjct));
	printf("%zu", ft_strcspn(NULL, rjct));
	return (0);
}