/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 20:30:37 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/02 21:32:37 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(char d1, char d2, char d3, char d4)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
	write(1, &d4, 1);
	if (1)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char d1;
	char d2;
	char d3;
	char d4;

	d1 = 47;
	d2 = 47;
	d3 = 48;
	d4 = 48;
	while (d1++ < 57)
	{
		d2
		while (d2++ < '9')
		{
			display(d1, d2, d3, d4);
			d2++;
		}
		d1++;
	}
}
