/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:04:56 by dyoula            #+#    #+#             */
/*   Updated: 2021/06/28 17:13:20 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	plus_width(char *str, int va_arg)
{
	int	i;

	if (!str || !va_arg)
		return (0);
	i = 0;
	if (*str == '+' && va_arg >= 0)
	{
		i++;
		write(1, "+", 1);
	}
	else if (*str == '+' && *str + 1 == '-')
	{
		if (va_arg >= 0)
			write(1, "+", 1);
		i++;
	}
	else
		return (0);
	return (i);
}

int space(char)