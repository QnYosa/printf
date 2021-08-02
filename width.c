/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:18:21 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/02 18:09:45 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_ast(const char **str, t_container *box)
{
	if (**str == '*')
	{
		(*str)++;
		box->width = va_arg(box->params, int);
	}
}

void	width_maestro(const char **str, t_container *box)
{
	check_ast(str, box);
	box->width = ft_atoi (str);
	if (box->width > 0)
		box->width_found = 1;
	check_ast(str, box);
}
