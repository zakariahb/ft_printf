/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:09:33 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/24 17:56:14 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_unsig_putnbr(unsigned int n);
int ft_putnbr(int n);
int ft_puthex(unsigned int n, char format);

# endif