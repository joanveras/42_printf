/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <jveras@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:57:23 by jveras            #+#    #+#             */
/*   Updated: 2023/11/03 11:55:47 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

void	lower_hex(unsigned int n);
void	upper_hex(unsigned int n);
void	putmem(unsigned long n);
void	putuns_fd(unsigned int n, int fd);
void	check_format(const char *format, int i, va_list ap);

int	ft_printf(const char *, ...);

#endif