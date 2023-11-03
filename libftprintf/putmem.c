/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putmem.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <jveras@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:46:14 by jveras            #+#    #+#             */
/*   Updated: 2023/11/03 13:15:56 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	putmem(unsigned long n)
{
	int	i;
	char	rem;
	char	hex[14];

	i = 0;
	while (n > 0)
	{
		rem = n % 16;
		if (rem < 10)
			hex[i] = rem + '0';
		else
			hex[i] = rem + ('7' + 32);
		n = n / 16;
		i++;
	}
	hex[i++] = 'x';
	hex[i++] = '0';
	while (i--)
		ft_putchar_fd(hex[i], 1);
}
