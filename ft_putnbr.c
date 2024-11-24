/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:40:40 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/24 17:57:00 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"
 
int ft_putnbr(int n) 
{
    int count = 0;
    if (n < 0) {
        count += ft_putchar('-');
        n = -n;  // Make n positive
    }
    if (n >= 10) 
    {
        count += ft_putnbr(n / 10);  // Recursive 
    }
    count += ft_putchar(n % 10 + '0');  // Write the last digit
    return count;
}