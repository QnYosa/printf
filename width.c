#include "ft_printf.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;	
	long long	number;

	sign = 1;
	i = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return ((number * sign));
}

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