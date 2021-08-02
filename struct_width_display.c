/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_width_display.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:16:12 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/02 15:53:37 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	assign_len(t_container *box)
{
	if (box->spec == 'd' || box->spec == 'i')
		box-> len = size_int(box->number);
	if (box->spec == 'o' || box->spec == 'u' || box->spec == 'x'
		|| box->spec == 'X')
		box->len = size_unsigned_int(box->ui);
		/*
	if (box->spec == 'p')
		box-> len = size_unsigned_long_int(box->uli);*/
}

void	print_width(t_container *box)
{
	unsigned int	i;

	assign_len(box);
	i = 0;
	if (box->zero == 0 && box->spec != 'p')
	{
		while (i < (box->width - box->len))
		{
			box->printed += ft_putchar(' ');
			i++;
		}
	}
	else if (box->zero == 1 && box->letters == 0)
	{
		while (i < box->width - box->len)
		{
			box->printed += ft_putchar('0');	
			i++;
		}
	}
}

void		struct_disp_maestro(t_container *box)
{
	if (box->minus == 0)
		print_width(box);
		/*
	if (box->letters == '1')
		print_precision_l(box);
	else
		print_precision_number(box);
	if (box->minus == 1)
		print_width(box);
		*/
}
