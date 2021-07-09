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

void	ft_print_hexa(unsigned long int n)
{
	static char	base[] = "0123456789abcdef";

	if (n <= 16 && n >= 0)
		ft_putchar(base[n]);
	else
	{
		ft_print_hexa(n / 16);
		ft_print_hexa(n % 16);
	}
}

void	ft_print_h(long int n)
{
	static char	base[] = "0123456789abcdef";

	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n <= 16 && n >= 0)
		ft_putchar(base[n]);
	else
	{
		ft_print_address(n / 16);
		ft_print_address(n % 16);
	}
}

void	ft_print_address(unsigned long int n)
{
	ft_putchar('0');
	ft_putchar('x');
	ft_print_hexa(n);
}

	/*
int	main(void)
{
	int		a[2] = {1, 2};
	void	*ptr;

	ptr = &a;
	ft_print_address((unsigned long int)ptr);
	//ft_putnbr(-01010);
}
	*/
