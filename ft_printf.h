/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:32:44 by dyoula            #+#    #+#             */
/*   Updated: 2021/08/03 17:37:25 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define	UPPER_HEX	"0123456789ABCDEF"
# define	LOWER_HEX	"0123456789abcdef"
# define	OCTAL		"012345678"
# define	FLAGS		"cspdiuxXo"

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_t_container
{
	int						minus;
	int 					plus;
	int 					space;
	int						zero;
	int						steps; //(nombre de space) - (len du int) if int trop grand tout print;
	int						diez;
	int						percent;
	unsigned int			len; // taille de l'argument pour precision et width.
	int 					letters; // si c'est des nu ou des lettres qu'on manipule. 
	unsigned int 			width; // ok
	unsigned int			width_found;
	unsigned int			precision;
	int						precision_found;
	char					spec;
	int 					printed;
	int						number;
	unsigned long int		uli;
	unsigned int			ui;
	char					*string;
	char					caracter;
	va_list					params;
}	t_container;

//flags
int	ft_printf(const char *str, ...);
void				flags_maestro(const char **str, t_container *box);
int					is_flag_(char c, const char **str, t_container *box);
void				flag_struct_fill(char c, t_container *box);
int					plus(const char *str, int va_arg);
int					count_width(const char **str, t_container *box);
void				print_flags(t_container *box);
//width
void 				width_maestro(const char **str, t_container *box);
void				print_width(t_container *box);
//precision
void				precision_maestro(const char **str, t_container *box);
void				print_precision_maestro(t_container *box);

//display
int					ft_putchar(char c);
int					ft_putnstr(char *str, int n);
void				ft_putnbr(int n, t_container *box);
void				ft_putnbr_u(unsigned int n, t_container *box);
void				ft_print_address(unsigned long int n, t_container *box);
void				ft_putnbr_base(unsigned int n, t_container *box);
// maestro
void				struct_disp_maestro(t_container *box);
void				spec_maestro(const char **str, t_container *box);
//utils
int     			ft_atoi(const char **str);
int					ft_strlen(const char *str);
char				*ft_strdup(const char *str);
unsigned int		size_int(int n);
unsigned int		size_unsigned_int(unsigned int n);

#endif