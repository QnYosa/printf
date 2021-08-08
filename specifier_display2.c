/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_display2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:08:13 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/08 17:39:21 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(unsigned long int n, t_container *box)
{
	static char	base[] = LOWER_HEX;

	if (n == 16)
		box->printed += write(1, "10", 2);
	else if (n < 16 && n >= 0)
		box->printed += ft_putchar(base[n]);
	else
	{
		ft_print_hexa(n / 16, box);
		ft_print_hexa(n % 16, box);
	}
}

char	*base_maker(t_container *box)
{
	char	*base;

	if (box->spec == 'x')
		base = LOWER_HEX;
	if (box->spec == 'X')
		base = UPPER_HEX;
	if (box->spec == 'o')
		base = OCTAL;
	return (base);
}

void	ft_putnbr_base(unsigned int n, t_container *box)
{
	char	*base;

	base = base_maker(box);
	if (n == 16)
		box->printed += write(1, "10", 2);
	else if (n <= (unsigned int)ft_strlen(base) && n >= 0)
		box->printed += ft_putchar(base[n]);
	else
	{
		ft_putnbr_base(n / ft_strlen(base), box);
		ft_putnbr_base(n % ft_strlen(base), box);
	}
}

void	ft_print_address(unsigned long int n, t_container *box)
{
	box->printed += ft_putchar('0');
	box->printed += ft_putchar('x');
	ft_print_hexa(n, box);
}
