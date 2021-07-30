#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...);

int main ()
{
	ft_printf("100.3s", "yosemite");
	printf("\n");
	ft_printf("%010d", 9);

}
