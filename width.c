/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:18:21 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/28 16:35:37 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
** la width avec une variable n'apparait que si la variable est superieur
** a la width du nombre.
** '*' et nombre ne peuvent pas cohabiter
*/
// compte la longueur du nbr

void	check_ast(const char **str, t_container *box)
{
	if (**str == '*')
		(*str)++;
	box->width = va_arg(box->params, int);
}

void	width_maestro(const char **str, t_container *box)
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
	t_container	box;

	s = ft_strdup("4567*");
	width_maestro(&s, &box);
	printf("%d\n", box.width);
	printf("%d", box.w_ast);

}
*/
