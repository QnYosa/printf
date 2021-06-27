#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int n)
{
	char c;

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

void	ft_putnbr_base(int n)
{
	char base [] = "0123456789ABCDEF";
	unsigned int nb;

	if (n < 0)
	{
		n *= 1;
		write(1, "-", 1);
	}
	nb = n;
	if (nb <= 16 && nb >= 0)
		write(1, &base[nb], 1);
	else
	{
		ft_putnbr_base(nb /16);
		ft_putnbr_base(nb % 16);
	}
}
