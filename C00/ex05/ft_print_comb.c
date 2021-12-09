/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:04:15 by elouisia          #+#    #+#             */
/*   Updated: 2021/08/09 19:16:32 by elouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char h, char d, char u)
{
	ft_putchar(h);
	ft_putchar(d);
	ft_putchar(u);
	if (h < 55)
	{
		ft_putchar(',');
		ft_putchar(32);
	}
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	h;

	u = 49;
	d = 48;
	h = 47;
	while (h++ <= 54)
	{
		while (d++ <= 55)
		{
			while (u++ <= 56)
			{
				ft_print(h, d, u);
			}
			u = d + 1;
		}
		d = h + 1;
		u = h + 2;
	}
}
