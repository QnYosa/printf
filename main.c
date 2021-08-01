#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...);

int main ()
{
	int *u;
	int n = 45;
	u = &n;
	printf("%d\n", ft_printf("%s, %c %+d\n", "hola", 'c', 10));
	//ft_printf("haha %10.3s, %+d le boss", "yondu", 9);
	printf("%d", printf("%s, %c %+d\n", "hola", 'c', 10));

	//printf("% d\n", 9);
	//ft_printf("%010d", 9);

}
