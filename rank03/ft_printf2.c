/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:40:08 by seblin            #+#    #+#             */
/*   Updated: 2024/01/30 12:14:29 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_putnbr_base(long int n, int base)
{
	int	i;

	i = 0;
	if (n < 0)
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
	i = 0;
	while (s[i])	
		write(1, &s[i++], 1);
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
	va_list	lst;
	int		n_item;

	va_start(lst, s);
	n_item = 0;
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

// int main(void)
// {
// 	ft_printf("Hexadecimal for %d is %x\n", 42, 42);
// 	return (0);	
// }