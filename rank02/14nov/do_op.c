/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:20:15 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 14:20:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		a;
	int		b;
	char	sign;
	int		res;

	if (argc != 4)
		return (write(1, "\n", 1));
	res = 0;
	a = atoi(argv[1]);
	sign = *argv[2];
	b = atoi(argv[3]);

	if (sign == '-')
		res = a - b;
	else if (sign == '+')
		res = a + b;
	else if (sign == '/')
		res = a / b;
	else if (sign == '*')
		res = a * b;
	else if (sign == '%')
		res = a % b;
	printf("%d\n", res);
	return (0);
}
