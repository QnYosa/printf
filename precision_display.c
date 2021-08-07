/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_display.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 16:01:51 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/07 18:47:41 by dyoula           ###   ########.fr       */
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
	int				result;

	length = size_int(box->number);
	if (box->number < 0 && (box->spec == 'd' || box->spec == 'i'))
		length--;
	if (box->spec == 'u')
		length = size_u_int(box->ui);
	else if (box->spec == 'x' || box->spec == 'X')
	{
		size_hexa(box->ui, box);
		length = box->size_hexa;
	}
	result = (box->precision - length);
	if (box->number < 0 && (box->spec == 'd' || box->spec == 'i'))
		result += 1;
	i = 0;
	while ((int)i < (result))
	{
		box->printed += ft_putchar('0');
		i++;
	}
}

void	print_precision_maestro(t_container *box)
{
	print_precision_number(box);
}
