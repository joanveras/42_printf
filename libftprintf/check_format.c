/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <jveras@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:04:18 by jveras            #+#    #+#             */
/*   Updated: 2023/11/03 13:22:31 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	check_format(const char *format, int i, va_list ap)
{
	if (format[i + 1] == 'c')
		ft_putchar_fd(va_arg(ap, int), 1);
	else if (format[i + 1] == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);
	else if (format[i + 1] == 'p')
		putmem(va_arg(ap, unsigned long));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		ft_putnbr_fd(va_arg(ap, int), 1);
	else if (format[i + 1] == 'u')
		putuns_fd(va_arg(ap, unsigned int), 1);
	else if (format[i + 1] == 'x')
		lower_hex(va_arg(ap, unsigned int));
	else if (format[i + 1] == 'X')
		upper_hex(va_arg(ap, unsigned int));
	else if (format[i + 1] == '%')
		ft_putchar_fd('%', 1);
}