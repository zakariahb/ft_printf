/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:08:13 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/24 17:51:22 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

static int ft_chek_form(int i,va_list p)
{
    int count = 0;
    while (1)
    {
        if (i == 'c')
            count += ft_putchar(i);
        else if(i == 's')
            count += ft_putstr(char *s);
        else if (i == 'd' || i == 'i')
            count += ft_putnbr(i);
        else if (i == '%')
            count += ft_putchar('%');
        else if (i == 'X' || i == 'x')
            count += 
        else if (i == 'u');
            count += ft_unsig_putnbr(i);
        else 
            write(1, &i, 1);
        i++;
    }
    return count;
}

int ft_printf(const char *form, ...)
{
    va_list p;
    int i;
    int total;

    va_start(p ,form);
    i = 0;
    total = 0;
    while(form[i])
    {

        if (form[i] == '%')
        {
            total +=  ft_chaek_form(form[i] + 1,p);
            i++;
        }
        else 
            total += ft_putchar(form[i]);
        i++;
        
    }
    va_end(p);
    return total;
}
