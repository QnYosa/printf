#ifndef FT_PRINT_F
# define FT_PRINT_F

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct width
{
	int zero; //if 0 else ' ' (seulement sur la gauche)
	int steps; //(nombre de space) - (len du int) if int trop grand tout print;
	int left; //boolean if '-'
	char sign; // space or 0
	int plus; //afficher un + devant les positifs
	int visible; // invisible plus sign.

}	width;


void	ft_putstr(char *str);
void	ft_putchar(char c);
int     ft_atoi(const char *str);


#endif