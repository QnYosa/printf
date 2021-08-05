/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counters.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:04:56 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/05 18:47:21 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_width(const char **str, t_container *box)
{
	int	n;
	int	i;

	n = 0;
	i = -1;
	if (**str == '0')
		str++;
	n = ft_atoi (str);
	while (++i < n)
		box->printed += ft_putchar(' ');
	return (n);
}
