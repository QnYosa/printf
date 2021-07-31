#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...);

int main ()
{
	ft_printf("haha%s, %.4d", "yondu", 9);
	//printf("hola salut %45.1s\n", "yosemite");
	//ft_printf("%010d", 9);

}
