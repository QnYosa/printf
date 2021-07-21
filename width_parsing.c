#include "ft_printf.h"

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
