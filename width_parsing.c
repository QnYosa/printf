#include "ft_printf.h"

// compte la longueur du nbr
int	count_width(char *str)
{
	int	n;
	int	i;

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
	va_list	params;
	char	*s1;
	int		i;

	i = -1;
	va_start(params, str);
	s1 = (char *)str;
	while (1 && s1 != NULL)
	{
		ft_putstr(s1);
		write(1, "\n", 1);
		s1 = va_arg(params, char *);
	}
	va_end(params);
	return (0);
}

int	main(void)
{
	printf("%d", plus_width("+", 4));
}
