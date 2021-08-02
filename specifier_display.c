#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	bytes;

	bytes = 0;
	write(1, &c, 1);
	bytes++;
	return (bytes);
}

int 	ft_putnstr(char *str, int n)
{
	int i;
	int bytes;

	bytes = 0;
	i = -1;
	while (++i < n && *str)
	{
		bytes += ft_putchar(*str);
		str++;
	}
	return (bytes);
}

void	ft_putnbr(int n, t_container *box)
{
	char	c;

	c = '0';
	if (n < 0)
	{
		n *= -1;
		box->printed += write(1, "-", 1);
		if (box->zero == 1 && box->precision_found == 1)
		{
			box->width -= 1;
			print_width(box);
		}
	}
	c += n;
	if (n <= 9 && n >= 0)
		box->printed += write(1, &c, 1);
	else
	{
		ft_putnbr(n / 10, box);
		ft_putnbr(n % 10, box);
	}
}

void	ft_putnbr_u(unsigned int n, t_container *box)
{
	char	c;

	c = '0';
	if (n < 0)
	{
		n *= 1;
		box->printed += write(1, "-", 1);
	}
	c += n;
	if (n <= 9 && n >= 0)
		box->printed += write(1, &c, 1);
	else
	{
		ft_putnbr_u(n / 10, box);
		ft_putnbr_u(n % 10, box);
	}
}
