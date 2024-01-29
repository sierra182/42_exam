/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:47:49 by seblin            #+#    #+#             */
/*   Updated: 2023/11/08 21:38:43 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void sort_int_tab(int *tab, unsigned int size)
{
	int	i;
	int	ref;
	
	i = 0;	
	ref = 0;
	while (i < size)
	{
		if (tab[i] < tab[ref])
		{
			swap(&tab[i], &tab[ref]);				
			i = 0;
		}
		else		
			ref = i++;	
	}
}
void sort_int_tab2(int *tab, unsigned int size)
{
	int	i;
	
	i = 0;		
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap(&tab[i], &tab[i + 1]);				
			i = 0;
		}
		else		
			i++;	
	}
}

#include <stdio.h>

int main(void)
{
	int	tab[] = {48, 42, 7, 16, 15, 42, 0, 299};
	int	i = 0;
	
	sort_int_tab2(tab, 8);
	while (i < 8)
		printf("%d ", tab[i++]);
	return (0);
}