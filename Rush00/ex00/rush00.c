/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:12:16 by elouisia          #+#    #+#             */
/*   Updated: 2021/08/08 21:49:40 by elouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_line(char a, char b, char c, int x)
{
	ft_putchar(a);
	while (x > 2)
	{
		ft_putchar(b);
		x--;
	}
	if (x == 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1 )
		return ;
	ft_print_line(111, 45, 111, x);
	while (y > 2)
	{
		ft_print_line(124, 32, 124, x);
		y--;
	}
	if (y == 2)
		ft_print_line(111, 45, 111, x);
}
