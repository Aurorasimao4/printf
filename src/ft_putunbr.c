/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:01:11 by asimao            #+#    #+#             */
/*   Updated: 2024/05/31 13:01:28 by asimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putunbr(unsigned int u)
{
	int	len;

	len = 0;
	if (u <= 9)
	{
		ft_putstr_char(u + '0');
		len++;
	}
	if (u >= 10)
	{
		len += ft_putnbr(u / 10);
		len += ft_putnbr(u % 10);
	}
	return (len);
}
