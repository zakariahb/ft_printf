/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:49:09 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/24 17:56:51 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

int ft_puthex(unsigned int n, char format)
 {
    int count = 0;
    char *base;

    if (format == 'x') {
        base = "0123456789abcdef";
    } else {
        base = "0123456789ABCDEF";
    }

    if (n >= 16) {
        count += ft_puthex(n / 16, format);
    }
    count += ft_putchar(base[n % 16]);
    return count;
}