#include "ft_printf.h"

int plus_width(char *str, int va_arg)
{
	int i;

	if (!str || !va_arg)
		return (0);
	i = 0;
	if (*str == '+' && va_arg >= 0)
	{
		i++;
		write(1, "+", 1);
	}
	else if (*str == '+' && *str + 1 == '-')
	{
		if (va_arg >= 0)
			write(1, "+", 1);
		i++;
	}
	else
		return (0);
	return (i);
}

int count_width(char *str)
{
	int n;
	int i;

	n = 0;
	i = -1;
	if (*str == '0')
		str++;
	n = ft_atoi (str);
	while (++i < n)
		ft_putchar(' ');
	return (n);
}

int	ft_test(const char *str, ...)
{
	va_list params;
	char 	*s1;
	int		i;

	i = -1;
	va_start(params, str);
	s1 = (char *)str;
	while (1 && s1 != NULL)
	{
		ft_putstr(s1);
		write(1, "\n", 1);
		s1 = va_arg(params, char*);
	}
	va_end(params);
	return (0);
}
int main ()
{
	printf("%d", plus_width("+", 4));
}