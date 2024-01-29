/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:48:24 by seblin            #+#    #+#             */
/*   Updated: 2023/11/10 20:02:41 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	return (c >= 9 && c <= 13 || c == 32);
}
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
int	ft_atoi(const char *str)
{
	int sign;
	int	res;

	res = 0;
	sign = 1;
	while(ft_isspace(*str))
		str++;
	if (*str == '-' && str++)			
		sign = -sign;
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))	
		res = res * 10 + *str++ - 48;
	return (sign * res);	
}