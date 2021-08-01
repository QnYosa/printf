/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:04:56 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/31 19:37:13 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_struct_fill(char c, t_container *box)
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

int	is_flag_(char c, const char **str, t_container *box)
{
	const char	flags [] = "-+ #0";
	const char	*list;

	list = flags;
	while (*list)
	{
		if (*list == c)
		{
			flag_struct_fill(c, box);
			str++;
			return (1);
		}
		list++;
	}
	return (0);
}

void	flags_maestro(const char **str, t_container *box)
{
	while (is_flag_(**str, str, box))
	{
		flag_struct_fill(**str, box);
		(*str)++;
	}
}
