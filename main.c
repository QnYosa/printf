#include "ft_printf.h"

int	ft_printf(const char *str, ...);

int main ()
{
	int *u;
	int n = 45;
	u = &n;
	printf("hello %d\n", ft_printf("salut %o\n", -42));
	printf("hello %d\n", printf("salut %o\n", -42));

	//printf("% d\n", 9);
	//ft_printf("%010d", 9);

}
