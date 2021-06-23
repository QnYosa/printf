#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list ap;
	int		i;

	i = -1;
	va_start(ap, str);

	va_arg(ap, char *);
	while (*str)
	{
		if(*str != '%')
			ft_putchar(*str);
		str++;
	}
	va_arg(ap, char *);
	while (*str)
	{
		if(*str != '%')
			ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (0);
}

int main (void)
{
	ft_printf("hola %s\n" "huhu");
}
// return le nombre de caracteres imprimes sans compter l'octet nul.