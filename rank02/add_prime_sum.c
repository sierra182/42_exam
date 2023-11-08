/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:46:34 by seblin            #+#    #+#             */
/*   Updated: 2023/11/08 19:16:29 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i * i <= n)	
		if (!(n % i++))
			return (0);	
	return (1);
}

int	atoi(char *s)
{
	int res;
	int sign;
	
	res = 0;
	sign = 1;
	while (*s >= 9 && *s <= 13 || *s == 32)
		s++;
	if (*s == '-')
	{
		sign = -sign;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
		res = res * 10 + *s++ - 48;
	return (res * sign);
}
void	put_nbr(int nbr)
{
	long	n;

	n = (long) nbr;
	if (n < 0)
	{
		write(1, "-", 1);	
		n = -n;
	}
	if (n > 9)
		put_nbr(n / 10);
	write(1, &(char) {n % 10 + 48}, 1);
}
int	main(int argc, char* argv[])
{
	int sum;
	int	nbr;
		
	sum = 0;
	if (argc == 2)	
	{
		nbr = atoi(argv[1]);
		while (nbr)					
			if (is_prime(nbr--))		
				sum += nbr + 1;			
	}
	put_nbr(sum);	
	return (write(1, "\n", 1));
}