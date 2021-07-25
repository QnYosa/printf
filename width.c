/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:18:21 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/25 19:33:38 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
** la width avec une variable n'apparait que si la variable est superieur
** a la width du nombre.
** '*' et nombre ne peuvent pas cohabiter
*/
// compte la longueur du nbr

void	check_ast(char **str, container *box)
{
	if (**str == '*')
		(*str)++;
	box->width = va_arg(params, int);
}

void	width_maestro(char **str, container *box)
{
	check_ast(str, box);
	box->width = ft_atoi (str);
	check_ast(str, box);
}

//ALGO FONCTIONNEL.
/*
int main (void)
{
	char		*s;
	container	box;

	s = ft_strdup("4567*");
	width_maestro(&s, &box);
	printf("%d\n", box.width);
	printf("%d", box.w_ast);

}
*/
