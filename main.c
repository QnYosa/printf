#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...);

int main ()
{
	int *u;
	int n = 45;
	u = &n;
	//ft_printf("haha %10.3s, %+d le boss", "yondu", 9);
	ft_printf("%*s\n", n, "salut");
	printf("%10o\n", n);
	//printf("% d\n", 9);
	//ft_printf("%010d", 9);

}
