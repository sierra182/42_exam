/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:40:06 by seblin            #+#    #+#             */
/*   Updated: 2023/11/08 22:44:52 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	int				data;
	struct s_list	*next;
} t_list;

int ascending(int a, int b)
{
	return (a <= b);
}

int descending(int a, int b)
{
	return (a <= b);
}

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;	
}
#include <unistd.h>
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp;
	
	tmp = lst;
	while (tmp->next)
	{write(1, "1", 1);
		if (cmp(tmp->data, tmp->next->data))
		{
			swap(&tmp->data, &tmp->next->data);
			tmp = lst;
		}
		else
			tmp = tmp->next;
	}
	return (lst);
}
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list 	link[8];
	int		i;
	
	i = 0;
	head = NULL;	
	while (i < 8)		
		link[i++].next = i < 7 ? &link[i + 1] : NULL;		
	link[0].data = 48;
	link[1].data = 42; 
	link[2].data = 7;
	link[3].data = 16;
	link[4].data = 42;
	link[5].data = 0;
	link[6].data = 0;
	link[7].data = 299;
	head = &link[0];
	sort_list(head, ascending);
	while (head)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	return (0);
}