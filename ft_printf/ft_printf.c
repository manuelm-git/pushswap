/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:18:03 by manumart          #+#    #+#             */
/*   Updated: 2023/01/17 06:28:35 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_checknprint(va_list arg, const char str, int *len)
{
	if (str == 'c')
		ft_putchar(va_arg(arg, int), len);
	else if (str == 's')
		ft_putstr(va_arg(arg, char *), len);
	else if (str == 'p')
		ft_print_memory(va_arg(arg, unsigned long int), len);
	else if (str == 'i' || str == 'd')
		ft_putnbr(va_arg(arg, int), len);
	else if (str == 'u')
		ft_unsignedputnbr(va_arg(arg, unsigned int), len);
	else if (str == 'x' || str == 'X')
		ft_hexa(va_arg(arg, unsigned int ), str, len);
	else if (str == '%')
		ft_putchar ('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;

	len = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_checknprint(arg, *str, &len);
		}
		else
			ft_putchar(*str, &len);
		str++;
	}
	va_end(arg);
	return (len);
}
