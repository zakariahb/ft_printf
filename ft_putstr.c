/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:39:54 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/24 17:57:09 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

int ft_putstr(char *str)
{
    int count = 0;
    if (!str)
    {
        return ft_putstr("(null)");
    }
    while (*str)
    {
        count += ft_putchar(*str++);
    }
    return count;
}