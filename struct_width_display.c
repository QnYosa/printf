/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_width_display.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:16:12 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/29 16:43:35 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	print_width(t_container *box)
{
	unsigned int	i;
	//if box->zero == 1 et width > 0 et et precision superieure a taille du
	//number
	// les zeros deviennent des espaces.
	i = -1;
	if (box->zero == 0)
		while (++i < box->width)
			ft_putchar(' ');
	else if (box->zero == 1)
		while (++i < box-> width)
			ft_putchar('0');
}

void	print_precision_l(t_container *box)
{
	if (box->spec == 's')
		ft_putnstr(box->string, box->precision);
	if (box->spec == 'c')
		ft_putchar(box->caracter);
}

void	print_precision_number(t_container *box)
{
	unsigned int	i;
	unsigned int	length;

	length = count_width((const char **)box->string);
	i = -1;
	while (i++ <= box->precision - length)
		ft_putchar('0');
}

void		struct_disp_maestro(t_container *box)
{
	if (box->minus == 0)
		print_width(box);
	if (box->letters == '1')
		print_precision_l(box);
	else
		print_precision_number(box);
	if (box->minus == 1)
		print_width(box);
}
