/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 21:48:34 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/28 16:34:12 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void ft_init_box(t_container *box)
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
}

void	ft_maestro(const char **str, t_container *box)
{
	while (*str)
	{
		if (**str != '%')
		{
			box->printed += ft_putchar(**str);
			flags_maestro(str, box);
			width_maestro(str, box);
			precision_maestro(str, box);
		
		}
	}
	va_arg(box->params, char *);
}

int	ft_printf(const char *str, ...)
{
	t_container	box;

	ft_init_box(&box);
	va_start(box.params, str);
	va_arg(box.params, char *);
	if (*str)
		ft_maestro(&str, &box);
	va_end(box.params);
	return (box.printed);
}

int	main(void)
{
	char no[] = "667677";
	char u[] = "gui";
	char str [] = "divvod jpv";
	ft_printf("sakut", str, no, u);
}
// return le nombre de caracteres imprimes sans compter l'octet nul.