/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:51:23 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/01 21:12:25 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
**1- compter la precision et l'enregistrer dans la struct. ok 
**2- chopper le flag et le type de variable. 
**
**/

int	count_precision(char **str)
{
	int	precision;

	if (**str == '.')
		(*str)++;
	precision = ft_atoi(str);
	return (precision);
}

void	struct_precision(char **str, percent *va)
{
	va->precision = count_precision(str);
	printf("%d", va->precision);
}

int	main(void)
{
	char	*s;
	percent	va;

	s = ft_strdup(".45d");
	struct_precision(&s, &va);
}
