#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...);

int main ()
{
	printf("%d", ft_printf("haha %10.3s, %+d le boss", "yondu", 9));
	//printf("hola salut %45.1s\n", "yosemite");
	//ft_printf("%010d", 9);

}
