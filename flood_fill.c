/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:54:16 by svidot            #+#    #+#             */
/*   Updated: 2023/11/14 13:01:47 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct  s_point
{
int           x;
int           y;
}               t_point;

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

void	myrec(char **tab, t_point size, t_point begin)
{
	t_point begin_save;
	
	if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y || tab[begin.y][begin.x] == 'F' )
		return ;
			printf("test\n");
	// for (int i = 0; i < size.y; ++i)
	// 	printf("%s\n", tab[i]);
	begin_save = begin;
	printf("begin x: %c\n", tab[begin.y][begin.x]);
	printf("testouille\n");
	tab[begin.y][begin.x] = 'F';
		
	begin.x -= 1;
	myrec(tab, size, begin);
	begin = begin_save;
	begin.x += 1;
	myrec(tab, size, begin);
	begin = begin_save;
	begin.y -= 1;

	myrec(tab, size, begin);
	
	begin = begin_save;
	begin.y += 1;
	myrec(tab, size, begin);	
	
}

// void  flood_fill(char **tab, t_point size, t_point begin)
// {
	
// }

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {0, 0};
	
	myrec(area, size, begin);
	printf("testfin\n");
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}