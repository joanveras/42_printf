/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putuns_fd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <jveras@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:01:34 by jveras            #+#    #+#             */
/*   Updated: 2023/11/03 10:35:19 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	putuns_fd(unsigned int n, int fd)
{
	if (n == 4294967286)
		ft_putstr_fd("4294967286", fd);
	else if (n >= 10)
	{
		putuns_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
	else if (n < 10)
		ft_putchar_fd((n % 10) + '0', fd);
}
