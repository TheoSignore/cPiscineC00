/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:16:35 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/03 14:34:59 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(int a, int b)
{
	char d1;
	char d2;
	char d3;
	char d4;

	d1 = a / 10 + '0';
	d3 = b / 10 + '0';
	d2 = a % 10 + '0';
	d4 = b % 10 + '0';
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, " ", 1);
	write(1, &d3, 1);
	write(1, &d4, 1);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int d1;
	int d2;

	d1 = -1;
	while (d1++ < 98)
	{
		d2 = d1;
		while (d2++ < 99)
		{
			display(d1, d2);
		}
	}
}
