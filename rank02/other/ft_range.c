/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:16:55 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 19:16:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*tab;
	int	*tab_save;
	int	size;
	int	isneg;

	isneg = 0;
	size = end - start + 1;
	if (size < 0 && ++isneg)
		size = start - end + 1;
	tab = (int *) malloc (sizeof(int) * size);
	tab_save = tab;
	if (!isneg)
		while (size--)	
			*tab++ = start++;
	else
		while (size--)	
		*tab++ = start--;
	return (tab_save);
}

// #include <stdio.h>
// int main (void)
// {
// 	int size;
// 	int start;
// 	int end;
// 	int	*res;

// 	start = -1;
// 	end = 2;
// 	size = 4;
// 	res = ft_range(start, end);
// 	while (size--)
// 		printf("%d", *res++);
// 	return (0);
// }