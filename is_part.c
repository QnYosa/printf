/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_part.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:42:30 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/21 19:17:00 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_spec(char c, container *box)
{
	const char	spec [] = "cspdiuxX";
	char		*list;

	list = spec;
	while (*list)
	{
		if (*list == c)
		{
			box->spec == *list; // on precise le spec. 
			return (1);
		}
		list++;
	}
	return (0);
}

void	search_flags(char **str, container *box)
{
	while (is_flag(**str, box))
		(*str)++;
}
