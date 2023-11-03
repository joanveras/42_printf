/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lower_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <jveras@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:34:35 by jveras            #+#    #+#             */
/*   Updated: 2023/11/03 11:55:28 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	lower_hex(unsigned int n)
{
	int	i;
	unsigned long	num;
	char	rem;
	char	hex[8];

	num = n;
	i = 0;
	while (num > 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i] = rem + '0';
		else
			hex[i] = rem + ('7' + 32);
		num = num / 16;
		i++;
	}
	while (i--)
		ft_putchar_fd(hex[i], 1);
}
