/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:18:21 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/31 19:28:36 by dyoula           ###   ########.fr       */
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
	check_ast(str, box);
}
