/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_width_display.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:16:12 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/25 20:05:51 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	print_width(container *box)
{
	int	i;
	//if box->zero == 1 et width > 0 et et precision supperieure a taille du number
	// les zeros deviennent des espaces.
	i = -1;
	if (box->zero == 0 && box->w_ast == 0)
		while (++i < box-> width)
			ft_putchar(' ');
	else if (box->zero == 1 && box->w_ast == 1)
		while (++i < box-> width)
			ft_putchar('0');
/*
	else
		while (i < va_arg)
			if (box->zero == 1)
				ft_putchar('0');
			else
				ft_putchar(' ');
*/	
}
// if precision > len no se hacee carajo.

// si precision > len se printa lo todo 
void	print_precision_l(container *box)
{
	if (box->p_ast == 0)
	{
		to_print = size_int(box->precision);
		if (to_print)
	}		
}

void 	print_precision_number(container *box)
{
	
}

int		struct_disp_maestro (container *box)
{
	if (box->letters == 1 && box->p_ast == 0)
	{
		box->len = ft_strlen(va_arg);
		
	}
	box->printed = 0;
	if (box->minus == 0)
	{
		print_width(box);
		if (box->letters == 1)
			print_precision_l(box);
		else
			print_precision_number(box));
	}
}
