#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	bytes;

	bytes = 0;
	write(1, &c, 1);
	bytes++;
	return (bytes);
}

void	ft_putnstr(char *str, int n)
{
	int i;

	i = -1;
	while (++i < n && *str)
		ft_putchar(*str);
}
/*
void	ft_putnstr(const char *str, int i)
{
	while (*str && i > 0)
	{
		ft_putchar(*str);
		i--;
		str++;
	}
}
*/

void	ft_putnbr(int n)
{
	char	c;

	c = '0';
	if (n < 0)
	{
		n *= -1;
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

void	ft_putnbr_u(unsigned int n)
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
