/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_display.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 16:01:51 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/02 19:53:23 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_precision_l(t_container *box)
{
	if (box->spec == 's')
		ft_putnstr(box->string, box->precision);
	if (box->spec == 'c')
		box->printed += ft_putchar(box->caracter);
}

void	print_precision_number(t_container *box)
{
	unsigned int	i;
	unsigned int	length;

	length = size_int(box->number);
	i = 0;
	while (i < box->precision - length)
	{
		box->printed += ft_putchar('0');
		i++;
	}
}

void	print_precision_maestro(t_container *box)
{
	print_precision_number(box);
}
