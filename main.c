#include <stdarg.h>
#include <stdio.h>

int main ()
{
	char	lord [] = "lord";
	int	n = 5;
	const char	hola[] = "%p forgive me %d";
	printf(hola, lord, n);
}
