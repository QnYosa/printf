/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_display.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 21:34:39 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/07 21:34:54 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	bytes;

	bytes = 0;
	write(1, &c, 1);
	bytes++;
	return (bytes);
}

int	ft_putnbr_int_limits(int n, t_container *box)
{
	if (n == 2147483647)
	{
		box->printed += write(1, "2147483647", 10);
		return (1);
	}
	if (n == -2147483648)
	{
		box->printed += write(1, "-2147483648", 11);
		return (1);
	}
	return (0);
}

int	ft_putnstr(char *str, int n)
{
	int	i;
	int	bytes;

	bytes = 0;
	i = -1;
	while (++i < n && *str)
	{
		bytes += ft_putchar(*str);
		str++;
	}
	return (bytes);
}

void	ft_putnbr(int n, t_container *box)
{
	if (ft_putnbr_int_limits(n, box))
		return ;
	else if (n < 0)
	{
		n *= -1;
		box->printed += write(1, "-", 1);
		if (box->width > 1 && box->minus == 0)
			struct_disp_maestro(box);
		if (box->number < 0 && box->minus == 0)
		{
			box->precision -= 1;
			print_precision_maestro(box);
		}
		if (box->zero == 1 && box->precision_found == 1 && box->minus == 0)
		{
			box->width -= 1;
			print_width(box);
		}
	}
	if (n <= 9 && n >= 0)
		box->printed += ft_putchar('0' + n);
	else
	{
		ft_putnbr(n / 10, box);
		ft_putnbr(n % 10, box);
	}
}

void	ft_putnbr_u(unsigned int n, t_container *box)
{
	if (n <= 9 && n >= 0)
		box->printed += ft_putchar('0' + n);
	else
	{
		ft_putnbr_u(n / 10, box);
		ft_putnbr_u(n % 10, box);
	}
}
