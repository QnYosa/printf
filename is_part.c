/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_part.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:42:30 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/06 14:57:04 by dyoula           ###   ########.fr       */
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
			
			return (1);
		}
		list++;
	}
	return (0);
}

int	is_spec(char c)
{
	const char	spec [] = "cspdiuxX";
	char		*list;

	list = spec;
	while (*list)
	{
		if (*list == c)
			return (1);
		list++;
	}
	return (0);
}

void	search_flags(char **str, percent box)
{
	while (is_flag(**str, percent box))
		(*str)++;
}