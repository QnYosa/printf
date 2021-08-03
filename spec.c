/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:48:40 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/03 17:34:29 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	spec_struct_attribution(char c, t_container *box)
{
	if (c == 'c')
		box->caracter = va_arg(box->params, int);
	if (c == 's')
		box->string = va_arg(box->params, char *);
	if (c == 'd' || c == 'i')
		box->number = va_arg(box->params, int);
	if (c == 'o' || c == 'u' || c == 'x' || c == 'X')
		box->ui = va_arg(box->params, unsigned int);
	if (c == 'p')
		box->uli = va_arg(box->params, unsigned long int);
	return (0);
}

void	spec_display(t_container *box)
{
	if (box->spec == 'c')
		box->printed += ft_putchar(box->caracter);
	if (box->spec == 's')
	{
		if (box->precision_found == 1)
			box->printed += ft_putnstr(box->string, box->precision);
		else
			box->printed += ft_putnstr(box->string, ft_strlen(box->string));
	}
	if (box->spec == 'd' || box->spec == 'i')
		ft_putnbr(box->number, box);
	if (box->spec == 'u')
		ft_putnbr_u(box->ui, box);
	if (box->spec == 'o' || box->spec == 'x' || box->spec == 'X')
		ft_putnbr_base(box->ui, box);
	if (box->spec == 'p')
		ft_print_address(box->uli, box);
}

int	spec_struct_fill(char c, t_container *box)
{
	char	*spec;

	spec = FLAGS;
	while (*spec)
	{
		if (*spec == c)
		{
			if (c == 'c' || c == 's' || c == '%')
			{
				box->letters = 1;
			}
			box->spec = *spec;
			return (1);
		}
		spec++;
	}
	return (0);
}

void	spec_maestro(const char **str, t_container *box)
{
	spec_struct_fill(**str, box);
	spec_struct_attribution(box->spec, box);
	print_flags(box);
	struct_disp_maestro(box);
	if (box->precision_found == 1 && box->precision > size_int(box->number)
		&& box->letters == 0)
		print_precision_maestro(box);
	spec_display(box);
}
