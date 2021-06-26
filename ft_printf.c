#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list params;
	int		i;

	i = -1;
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
		if(*str != '%')
			ft_putchar(*str);
		str++;
	}
	va_end(params);
	return (0);
}

int main (void)
{
	char no[] = "667677";
	char u[] = "gui";
	char str [] = "divvodjpv";
	ft_printf("sakut", str, no, u);
}
// return le nombre de caracteres imprimes sans compter l'octet nul.