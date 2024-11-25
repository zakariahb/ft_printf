/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:45:48 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/25 12:18:22 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_putnbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_unsigned_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
