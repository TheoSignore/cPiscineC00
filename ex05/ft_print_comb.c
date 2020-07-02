/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:11:52 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/02 17:57:51 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_comb(char d1, char d2, char d3)
{
	char coma;
	char space;

	coma = ',';
	space = ' ';
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
	if (d1 != '7')
	{
		write(1, &coma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	char first_digit;
	char second_digit;
	char third_digit;

	first_digit = 47;
	while (first_digit++ < 57)
	{
		second_digit = first_digit;
		while (second_digit++ < 57)
		{
			third_digit = second_digit;
			while (third_digit++ < 57)
			{
				ft_display_comb(first_digit, second_digit, third_digit);
			}
		}
	}
}
