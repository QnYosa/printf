#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list params;
	int		i;

	i = 0;
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
		{
			i++;
			ft_putchar(*str);
		}
		if (is_flag(*str))

		str++;
	}
	va_end(params);
	return (i);
}

int main (void)
{
	char no[] = "667677";
	char u[] = "gui";
	char str [] = "divvod jpv";
	ft_printf("sakut", str, no, u);
}
// return le nombre de caracteres imprimes sans compter l'octet nul.