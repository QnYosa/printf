/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:48:40 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/29 16:24:45 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	spec_struct_attribution(char c, t_container *box)
{
	if (c == 'c')
		box->caracter = va_arg(box->params, int);
	if (c == 's')
		box->string = va_arg(box->params, char *);
	if (c == 'd' || c == 'i')
		box->number = va_arg(box->params, int);
	if (c == 'o' || c == 'u' || c == 'x' || c == 'X')
		box->number = va_arg(box->params, unsigned int);
	if (c == 'p')
		box->number = va_arg(box->params, unsigned long int);
	return (0);
}

int	spec_struct_fill(char c, t_container *box)
{
	char *spec;

	spec = ft_strdup("cspdiuxX");
	while (*spec)
	{
		if (*spec == c)
		{
			if (c == 'c' || c == 's')
			{
				box->letters = 1;
			}
			box->spec = *spec;
			return (1);
		}
		spec++;
	}
	return (0);
}

void	spec_maestro(const char **str, t_container *box)
{
	spec_struct_fill(**str, box);
}
