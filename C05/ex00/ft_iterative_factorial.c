/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:49:59 by elouisia          #+#    #+#             */
/*   Updated: 2021/08/24 22:26:50 by elouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	i = 1;
	res = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
		while (i <= nb)
		{
			res *= i;
			i++;
		}
		return (res);
	}
	else
		return (0);
}
