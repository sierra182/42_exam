/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:35:00 by seblin            #+#    #+#             */
/*   Updated: 2023/11/09 12:56:14 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	const char	*s2_save;

	s2_save = s2;
	if (!s1 || !s2)
		return (NULL);
	while (*s1)
	{
		s2 = s2_save;
		while (*s2)
			if (*s1 == *s2++)
				return ((char *) s1);
		s1++;
	}
	return (NULL);
}
#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*s2;
	
	s1 = "bravo mon dodo";
	s2 = "dodo";
	printf("%s\n", strpbrk(NULL, s2));
	printf("%s", ft_strpbrk(NULL, s2));
	return (0);
}