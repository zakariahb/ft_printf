/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:08:13 by zalaksya          #+#    #+#             */
/*   Updated: 2024/12/04 12:04:18 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *form, ...)
{
	va_list	p;
	int		i;
	int		total;

	if (write(1, 0, 0) == -1)
		return (-1);
	va_start (p, form);
	i = 0;
	total = 0;
	while (form[i])
	{
		if (form[i] == '%')
		{
			if (form[i + 1])
			{
				total += ft_chek_form(form[i + 1], p);
				i++;
			}
		}
		else
			total += ft_putchar(form[i]);
		i++;
	}
	va_end(p);
	return (total);
}
