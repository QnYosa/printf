#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...);

int main ()
{
	//ft_printf("haha %10.3s, %+d le boss", "yondu", 9);
	printf("%+d\n", 9);
	printf("% d\n", 9);
	//ft_printf("%010d", 9);

}
