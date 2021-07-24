/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:32:44 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/24 17:14:56 by dyoula           ###   ########.fr       */
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
	int			zero; //if 0 else ' ' (seulement sur la gauche)
	int			steps; //(nombre de space) - (len du int) if int trop grand tout print;
	int			left; //boolean if '-'
	int			minus;
	int			precision;
	int 		printed; // nombre de bytes
	int 		plus;
	int			diez;
	int 		w_ast; // asterisque width ok
	int			p_ast; // asterisque precision ok 
	int			len;
	int			width; // ok
	int			percent; // if je suis dans un arg
	char		spec;
	va_list		params;
}	container;

//flags
void	flags_maestro(char **str, container *box);
int		is_flag_(char c, char **str, container *box);
void	flag_struct_fill(char c, container *box);
int		plus(char *str, int va_arg);

//width
void width_maestro(char **str, container *box);


//precision
//display
int		ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnstr(char *str, int i);
void	ft_putnbr(int n);
void	ft_putnbr_u(unsigned int n);
void	ft_print_address(unsigned long int n);
void	ft_print_hexa(unsigned long int n);
//utils
int     ft_atoi(char **str);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);

#endif