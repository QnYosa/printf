#include "ft_printf.h"

int	size_int(long long n)
{
	int	size;
	int	div;

	size = 1;
	div = 1;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n / div > 9)
	{
		div *= 10;
		size++;
	}
	return (size);
}

/*
int main ()
{
	count_width("5");
	write(1, "n", 1);
}
*/