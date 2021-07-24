/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:48:40 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/24 20:07:37 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	spec_struct_fill(char c, container *box)
{
	const char	spec [] = "cspdiuxX";
	char		*list;

	list = spec;
	while (*list)
	{
		if (*list == c)
		{
			box->spec == *list;
			return (1);
		}
		list++;
	}
	return (0);
}


void	spec_maestro(char **str, container box, void)
{
	
}