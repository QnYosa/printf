#include <stdarg.h>
#include <stdio.h>
int plus(int n)
{
	return (n + 3);
}

int main ()
{
	void	*number;
	int 	n = 4;

	number = plus(n);
	printf("%d", number);
}
