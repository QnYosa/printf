/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:32:44 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/07 16:16:02 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_F
# define FT_PRINT_F

# define	UPPER_HEX	"0123456789ABCDEF"
# define	LOWER_HEX	"0123456789abcdef"
# define	OCTAL		"012345678"

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct caracteristics
{
	int	zero; //if 0 else ' ' (seulement sur la gauche)
	int	steps; //(nombre de space) - (len du int) if int trop grand tout print;
	int	left; //boolean if '-'
	int	minus;
	int	precision;
	int printed;
	int plus;
}	percent;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnstr(char *str, int i);
void	ft_putnbr(int n);
void	ft_putnbr_u(unsigned int n);
void	ft_print_address(unsigned long int n);
void	ft_print_hexa(unsigned long int n);
int     ft_atoi(char **str);
int		plus(char *str, int va_arg);
int		ft_strlen(char *str);

#endif