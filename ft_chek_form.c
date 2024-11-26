/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chek_form.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:17:04 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/26 19:16:39 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chek_form(int i, va_list p)
{
	int		count;

	count = 0;
	if (i == 'c')
		count += ft_putchar(va_arg(p, int));
	else if (i == 's')
		count += ft_putstr(va_arg(p, char *));
	else if (i == 'd' || i == 'i')
		count += ft_putnbr(va_arg(p, int));
	if (i == 'x' || i == 'X')
		count += ft_puthex(va_arg(p, unsigned int), i);
	else if (i == 'u')
		count += ft_unsigned_putnbr(va_arg(p, unsigned int));
	else if (i == 'p')
	{
		count += ft_putstr("0x");
		count += ft_puthex(va_arg(p, unsigned long),'x');
	}
	else if (i == '%')
		count += ft_putchar('%');
	return (count);
}
