/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   octal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:37:10 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/09 17:29:54 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_oct(unsigned int n)
{
	static char	base[] = "012345678";

	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n <= 16 && n >= 0)
		ft_putchar(base[n]);
	else
	{
		ft_print_oct(n / 8);
		ft_print_oct(n % 8);
	}	
}
/*
int	main(void)
{
	ft_print_oct(258);
}
*/