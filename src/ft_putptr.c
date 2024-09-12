/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:16:56 by asimao            #+#    #+#             */
/*   Updated: 2024/05/31 12:17:11 by asimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	convert_hex(unsigned long int p)
{
	int	len;

	len = 0;
	if (p >= 16)
	{
		len += convert_hex(p / 16);
		len += convert_hex(p % 16);
	}
	else
	{
		if (p <= 9)
		{
			ft_putnbr_fd(p, 1);
			len++;
		}
		else
		{
			ft_putchar_fd(p - 10 + 'a', 1);
			len++;
		}
	}
	return (len);
}

int	ft_putptr(void *ptr)
{
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (2 + convert_hex((unsigned long int)ptr));
}
