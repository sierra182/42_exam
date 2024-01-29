/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:20:26 by seblin            #+#    #+#             */
/*   Updated: 2024/01/29 20:42:50 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_putnbr_base(long int n, int base)
{
	int i;
	
	i = 0;
	if (n < 0 && base == 10)
	{
		write(1, "-", 1);	
		n = -n;
		i++;
	}	
	if (n >= base)	
		i += ft_putnbr_base(n / base, base);
	if (n % base <= 9)	
		write(1, &(char){n % base + 48}, 1);
	else
		write(1, &(char){n % base + 87}, 1);
	return (++i);
}

int	ft_putstr(const char *s)
{
	int	i;
	
	if (!s)
		return (write(1, "(null)", 6));		
	i = -1;
	while (s[++i])	
		write(1, &s[i], 1);
	return (i);	
}

void	manage_ph(const char *s, va_list lst, int *n_item)
{
	if (*s == 's')	
		*n_item += ft_putstr(va_arg(lst, char *));
	else if (*s == 'd')
		*n_item += ft_putnbr_base(va_arg(lst, int), 10);
	else if (*s == 'x')
		*n_item += ft_putnbr_base(va_arg(lst, unsigned int), 16);
}

int ft_printf(const char *s, ...)
{
	va_list lst;
	int		n_item;

	n_item = 0;
	va_start(lst, s);
	while (*s)
	{
		if (*s++ == '%')
			manage_ph(s++, lst, &n_item);
		else if (++n_item)
			write(1, s - 1, 1);		
	}
	va_end(lst);
	return (n_item);
}
// #include <stdio.h>
// int main(void)
// {
// 	//char *str = NULL;
// 	ft_printf("Hexadecimal for %d is %x\n", 42, 42);
// 	//printf("%d\n", ft_printf("%x", 98102));
// 	//printf("%d\n", printf("%x", 98102));
// 	return (0);
// }