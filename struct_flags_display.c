/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_flags_display.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 19:09:23 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/28 15:45:18 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	struct_flags_display_maestro(t_container *box)
{
	if (box->plus == 1 && box->number >= 0)
		box->printed += ft_putchar('+');
	if (box->space == 1 && box->plus == 0 && box->number >= 0)
		box->printed += ft_putchar(' ');
}
