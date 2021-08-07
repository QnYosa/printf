/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 18:08:56 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/07 18:19:32 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	size_int(int n)
{
	unsigned int	size;
	int				div;
	unsigned int 	cpy;

	size = 1;
	div = 1;
	if (n < 0)
	{
		cpy = n * -1;
		size++;
	}
	else
		cpy = n;
	while (cpy / div > 9)
	{
		div *= 10;
		size++;
	}
	return (size);
}

unsigned int	size_u_int(unsigned int n)
{
	unsigned int	size;
	unsigned int	div;

	size = 1;
	div = 1;
	while (n / div > 9)
	{
		div *= 10;
		size++;
	}
	return (size);
}

void	size_hexa(unsigned int n, t_container *box)
{
	if (n < 16 && n >= 0)
		box->size_hexa += 1;
	else
	{
		size_hexa(n / 16, box);
		size_hexa(n % 16, box);
	}
}

unsigned int	size_unsigned_int(unsigned int n)
{
	unsigned int	size;
	int				div;

	size = 1;
	div = 1;
	while (n / div > 9)
	{
		div *= 10;
		size++;
	}
	return (size);
}
