/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 21:48:34 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/23 19:11:46 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_maestro(char **str, container *box)
{
	while (*str)
	{
		if (*str != '%')
			box->printed += ft_putchar(**str);
		while (is_flag_(**str, box))
			flag_struct_fill(**str, *str, box);
	}
	va_arg(box->params, char *);
}

int	ft_printf(const char *str, ...)
{
	container	*box;

	va_start(box->params, str);
	if (*str)
		ft_maestro(*str, &box);
	va_arg(box->params, char *);
	va_end(box->params);
	return (box->printed);
}

int	main(void)
{
	char no[] = "667677";
	char u[] = "gui";
	char str [] = "divvod jpv";
	ft_printf("sakut", str, no, u);
}
// return le nombre de caracteres imprimes sans compter l'octet nul.