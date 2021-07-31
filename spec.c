/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:48:40 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/26 15:53:23 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	spec_struct_attribution(char c, container *box)
{
	if (c == 'c')
		box->caracter = va_arg(box->params, char);
	if (c == 's')
		box->caracter = va_arg(box->params, char *);
	if (c == 'd' || c == 'i')
		box->number = va_arg(box->params, int);
	if (c == 'o' || c == 'u' || c == 'x' || c == 'X')
		box->number = va_arg(box->params, unsigned int);
	if (c == 'p')
		box->number = va_arg(box->params, unsigned long int);
	return (0);
}

int	spec_struct_fill(char c, container *box)
{
	const char	spec [] = "cspdiuxX";
	char		*list;

	list = spec;
	while (*list)
	{
		if (*list == c)
		{
			if (c == 'c' || c == 's')
			{
				box->letters = 1;
			}
			box->spec == *list;
			return (1);
		}
		list++;
	}
	return (0);
}

void	spec_maestro(char **str, container *box)
{
	spec_struct_fill_l(str, box);
}
