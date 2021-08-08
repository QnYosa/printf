/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:46:14 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/08 17:46:17 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_flags(t_container *box)
{
	if (box->plus == 1 && box->number >= 0
		&& (box->spec == 'd' || box->spec == 'i'))
		box->printed += ft_putchar('+');
	else if (box->space == 1 && box->number >= 0
		&& (box->spec == 'd' || box->spec == 'i')
		&& box->plus == 0)
		box->printed += ft_putchar(' ');
}

void	sharp_display(t_container *box)
{
	if (box->diez == 1)
	{
		if (box->spec == 'x')
			box->printed += write(1, "0x", 2);
		else if (box->spec == 'X')
			box->printed += write(1, "0X", 2);
	}
}

void	printf_flag_maestro(t_container *box)
{
	print_flags(box);
	if (box->ui != 0)
		sharp_display(box);
}
