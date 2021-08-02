/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:30:38 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/02 17:54:16 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_flags(t_container *box)
{
	if (box->plus == 1 && (box->number > 0 || box->ui > 0 ||
			box->uli > 0) && (box->spec == 'd' || box->spec == 'i'))
		box->printed += ft_putchar('+');
	else if (box->space == 1 && (box->number > 0 || box->ui > 0 ||
			box->uli > 0) && (box->spec == 'd' || box->spec == 'i')
		&& box->plus == 0)
		box->printed += ft_putchar(' ');
}
