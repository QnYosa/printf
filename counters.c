
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:04:56 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/24 15:36:42 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	count_width(char *str)
{
	int	n;
	int	i;

	n = 0;
	i = -1;
	if (*str == '0')
		str++;
	n = ft_atoi (&str);
	while (++i < n)
		ft_putchar(' ');
	return (n);
}