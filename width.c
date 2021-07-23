/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:18:21 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/23 19:19:31 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// compte la longueur du nbr
int	count_width(char *str)
{
	int	n;
	int	i;

	n = 0;
	i = -1;
	if (*str == '0')
		str++;
	n = ft_atoi (str);
	while (++i < n)
	{
		if ()
			ft_putchar(' ');
	}
	return (n);
}
