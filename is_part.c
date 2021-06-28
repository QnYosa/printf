/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_part.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:42:30 by dyoula            #+#    #+#             */
/*   Updated: 2021/06/28 17:44:19 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_flag_ (char c)
{
	const char	flags [] = "-+ #0";

	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	is_spec(char c)
{
	const char	spec [] = "cspdiuxX";

	while (*spec)
	{
		if (*spec == c)
			return (1);
		spec++;
	}
	return (0);
}
