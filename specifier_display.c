#include "ft_printf.h"

void	ft_putchar(char c)
{
	static int	bytes = 0;

	write(1, &c, 1);
	bytes++;
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str);
}

void	ft_putnstr(char *str, int i)
{
	while (*str && i > 0)
	{
		ft_putchar(*str);
		i--;
		str++;
	}
}

void	ft_putnbr(int n)
{
	char	c;

	c = '0';
	if (n < 0)
	{
		n *= 1;
		write(1, "-", 1);
	}
	c += n;
	if (n <= 9 && n >= 0)
		write(1, &c, 1);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

/*
void	ft_putnbr(int n, char *base)
{
	if (n < 0)
	{
		n *= 1;
		write(1, "-", 1);
	}
	if (n <= 16 && n >= 0)
		write(1, &base[n], 1);
	else
	{
		ft_putnbr_base(n / 16);
		ft_putnbr_base(n % 16);
	}
}
*/
