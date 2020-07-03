/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 14:46:45 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/03 16:47:47 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int b)
{
	char		aff;
	long int	order;
	long int	a;

	a = b;
	if (a < 0)
		write(1, "-", 1);
	else if (a == 0)
		write(1, "0", 1);
	a = a < 0 ? a * (-1) : a;
	order = 1;
	while (order < a)
		order *= 10;
	order = order > 1 ? order / 10 : order;
	while (a > 0)
	{
		aff = a / order + '0';
		a = a - (a / order) * order;
		order /= 10;
		write(1, &aff, 1);
	}
}
