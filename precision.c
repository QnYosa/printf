/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:51:23 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/24 17:51:07 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
**1- compter la precision et l'enregistrer dans la struct. ok 
**2- chopper le flag et le type de variable. (depois)
**3- pour une string nous indique le nombre de caracteres qui seront affiches.
	 s'ecrit apres un point.
**4- si precision superieur a la len du int on ajoute des 0
**
**/

void	asterix(char **str, container *box)
{
	if (**str == '*')
		(*str)++;
	box->p_ast = 1;
}

void	precision_struct_fill(char **str, container *box)
{
	asterix(str, box);
	box->precision = ft_atoi(str);
	asterix(str, box);
}

void	precision_maestro(char **str, container *box)
{
	if (**str == '.')
		(*str)++;
	precision_struct_fill(str, box);
}

//ALGO FUNCIONAL MAIS PRECISO FAZER A GESTIAO DAS LIMITAS  EX VARIAS '**'
/*
int	main(void)
{
	char		*s;
	container	box;

	s = ft_strdup(".45*d");
	precision_maestro(&s, &box);
	printf("%c", *s);
}
*/