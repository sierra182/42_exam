/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:05:32 by seblin            #+#    #+#             */
/*   Updated: 2023/11/10 20:39:09 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isspace(int c)
{
	return (c >= 9 && c <= 13 || c == 32);
}
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
int	ft_ishexa_up(int c)
{
	return (c >= 'A' && c <= 'F');
}

int	ft_ishexa_low(int c)
{
	return (c >= 'a' && c <= 'f');
}
int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' && str++)
		sign = -sign;
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str) || ft_ishexa_low(*str) || ft_ishexa_up(*str))
	{
		if (ft_ishexa_low(*str))			
			res = res * str_base + *str - 87;
		else if (ft_ishexa_up(*str))
			res = res * str_base + *str - 55;
		else 
			res = res * str_base + *str - 48;
		str++;
	}
	return (sign * res);
}

// #include <stdio.h>

// int main (void)
// {
// 	char* s;
	
// 	s = "662";
// 	printf("%d", ft_atoi_base(s, 10));
// 	return (0);
// }