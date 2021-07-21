/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:04:56 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/21 19:23:34 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_struct_fill(char c, percent box)
{
	if (c == '-')
		box->minus = 1;
	if (c == '+')
		box->plus = 1;
	if (c == ' ')
		box->space = 1;
	if (c == '0')
		box->zero = 1;
	if (c == '#')
		box->diez = 1;
}

int	is_flag_(char c, percent box)
{
	const char	flags [] = "-+ #0";
	char		*list;

	list = flags;
	while (*list)
	{
		if (*list == c)
		{
			flag_struct_fill(c, box);
			return (1);
		}
		list++;
	}
	return (0);
}

int	plus(char *str, int va_arg)
{
	int	i;

	if (!str || !va_arg)
		return (0);
	i = 0;
	if (*str == '+' && va_arg >= 0)
	{
		i++;
		ft_putchar("+");
	}
	else if (*str == '+' && *str + 1 == '-')
	{
		if (va_arg >= 0)
			ft_putchar('+');
		i++;
	}
	else
		return (0);
	return (i);
}

int	space(char *str, int va_arg)
{
	int	i;

	if (!str || !va_arg)
		return (0);
	i = 0;
	if (*str == ' ' && va_arg >= 0)
	{
		i++;
		ft_putchar(1, ' ', 1);
	}
	else if (*str == ' ' && *str + 1 == '-')
	{
		if (va_arg >= 0)
			ft_putchar(1, ' ', 1);
		i++;
	}
	else
		return (0);
	return (i);
}