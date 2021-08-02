/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_display2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:08:13 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/09 17:47:51 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(unsigned long int n, t_container *box)
{
	static char	base[] = "0123456789abcdef";

	if (n <= 16 && n >= 0)
		box->printed += ft_putchar(base[n]);
	else
	{
		ft_print_hexa(n / 16, box);
		ft_print_hexa(n % 16, box);
	}
}
char *base_maker(t_container *box)
{
	char *base;
	if (box->spec == 'x')
		base = ft_strdup("0123456789abcdef");
	if (box->spec == 'X')
		base = ft_strdup("0123456789ABCDEF");
	if (box->spec == 'o')
		base = ft_strdup("01234567");
	return (base);
}

void	ft_putnbr_base(unsigned int n, t_container *box)
{
	char	*base;

	base = base_maker(box);
	if (n < 0)
	{
		n *= -1;
		box->printed += write(1, "-", 1);
	}
	if (n <= (unsigned int)ft_strlen(base) && n >= 0)
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
