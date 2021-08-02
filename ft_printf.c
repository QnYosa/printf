/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 21:48:34 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/02 18:32:27 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_re_init_box(t_container *box)
{
	box->minus = 0;
	box->plus = 0;
	box->space = 0;
	box->zero = 0;
	box->steps = 0;
	box->diez = 0;
	box->len = 0;
	box->letters = 0;
	box->width = 0;
	box->precision = 0;
	box->spec = 0;
	box->number = 0;
	box->string = NULL;
	box->caracter = 0;
	box->percent = 0;
	box->uli = 0;
	box->width_found = 0;
}

void	ft_init_box(t_container *box)
{
	box->minus = 0;
	box->plus = 0;
	box->space = 0;
	box->zero = 0;
	box->steps = 0;
	box->diez = 0;
	box->len = 0;
	box->letters = 0;
	box->width = 0;
	box->precision = 0;
	box->spec = 0;
	box->printed = 0;
	box->number = 0;
	box->string = NULL;
	box->caracter = 0;
	box->percent = 0;
	box->uli = 0;
	box->width_found = 0;
}

void	ft_maestro(const char **str, t_container *box)
{
	while (**str)
	{
		if (**str == '%')
			box->percent = 1;
		else if (**str != '%' && box->percent == 1)
		{
			flags_maestro(str, box);
			width_maestro(str, box);
			precision_maestro(str, box);
			spec_maestro(str, box);
			ft_re_init_box(box);
		}
		else
		{
			box->printed += ft_putchar((char)**str);
		}
		(*str)++;
	}
}

int	ft_printf(const char *str, ...)
{
	t_container	box;

	va_start(box.params, str);
	ft_init_box(&box);
	if (*str)
		ft_maestro(&str, &box);
	else
		return (0);
	va_end(box.params);
	return (box.printed);
}
