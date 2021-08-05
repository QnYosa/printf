#include "ft_printf.h"
#include "limits.h"

int	ft_printf(const char *str, ...);

int main ()
{
	int *u;
	int n = 45;
	u = &n;
	printf("hello %d\n", ft_printf(" % 1s", ""));
	printf("hello %d\n", printf(" % 1s", ""));
	//printf("hello %d\n", printf("%d\n", 10));
	//printf("hello %d\n", printf("%10d\n",-9));
	//printf("hello %d\n", printf("salut %o\n", -42));

	//printf("% d\n", 9);
	//ft_printf("%010d", 9);

}
