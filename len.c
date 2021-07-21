/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 18:08:56 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/21 19:00:57 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	size_int(int n)
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
	{
		if ()
			ft_putchar(' ');
		else

	}
	return (n);
}
