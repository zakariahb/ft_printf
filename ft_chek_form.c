/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chek_form.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:17:04 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/25 11:01:22 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

int ft_chek_form(int i,va_list p)
{
    int count = 0;
    while (1)
    {
        if (i == 'c')
            count += ft_putchar(va_arg(p, int));
        else if(i == 's')
            count += ft_putstr(va_arg(p ,char *));
        else if (i == 'd' || i == 'i')
            count += ft_putnbr(va_arg(p, int));
        else if (i == '%')
            count += ft_putchar(va_arg(p, int));
        else if (i == 'X' || i == 'x')
            count += ft_puthex(va_arg(p,int),count);
        else if (i == 'u')
            count += ft_unsigned_putnbr(va_arg(p, unsigned int));
        else 
            count += ft_putchar(va_arg(p, int));
        i++;
    }
    return count;
}