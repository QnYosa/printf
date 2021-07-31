/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 18:08:56 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/31 19:32:40 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	size_int(int n)
{
	unsigned int	size;
	int				div;
	unsigned int 	cpy;

	if (n < 0)
		cpy = n * -1;
	else
		cpy = n;
	size = 1;
	div = 1;
	while (cpy / div > 9)
	{
		div *= 10;
		size++;
	}
	return (size);
}
