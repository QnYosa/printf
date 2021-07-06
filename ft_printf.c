/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 21:48:34 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/01 22:39:40 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	ft_maestro(char **str, percent box)
{
	//checker les flags
}

int		ft_printf(const char *str, ...)
{
	va_list params;
	percent box;

	va_start(params, str);
	va_arg(params, char *);
	while (*str)
	{
		if (*str != '%')
			ft_putchar(*str);
		str++;
	}
	va_arg(params, char *);
	while (*str)
	{
		if (*str != '%')
		{
			ft_putchar(*str);
		}
		else
			ft_maestro(&str, box);
			str++;
	}
	va_end(params);
	return (i);
}

int	main(void)
{
	char no[] = "667677";
	char u[] = "gui";
	char str [] = "divvod jpv";
	ft_printf("sakut", str, no, u);
}
// return le nombre de caracteres imprimes sans compter l'octet nul.