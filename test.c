/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 01:24:48 by dyoula            #+#    #+#             */
/*   Updated: 2021/07/21 18:04:47 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main (void)
{
	int	n;
	int nu;
	char s [] = "fufulokoa";

	//v = 3,1578;
	n = 2147483647;
	nu = 35;
	printf("--------------------------------------\n");
	printf("%-54dkoko\n", nu); // koko va a la fin a cause du moins. 
	printf("%54dkoko\n", nu);
	printf("0 %05d\n", nu);// le 5 definit la width totale
	printf("1 %d\n", n);
	printf("2 % d\n", n);
	/* 
	** 	printf("% +d\n", n); flag ' ' is ignored when flag '+' is present
	**
	*/
	printf("-----------------FLAGS----------------\n");
	printf("1 % 0d\n", n); //espace l'emporte
	printf("2 %0+*d\n", 100, n);
	printf("3 %+-*d\n", 100, n);
	printf("4 %+-*d\n", 100, n);
	printf("5 %.2s\n", s);
	printf("6 %.5d\n", nu); // fout des zeros devant
	//printf("9 %.*4d", nu, n);data argument not used by format string
	//printf("9 %.3*d", nu, n); fonctionne pas premier arrivé premier servi
	printf("--------------------------------------\n");
	//printf("7 %.3d\n", n); on ne tronque pas int  on ajoute des zero devant
}
