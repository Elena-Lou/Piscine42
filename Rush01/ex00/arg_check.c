/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:54:02 by elouisia          #+#    #+#             */
/*   Updated: 2021/08/15 21:07:21 by ephauv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	arg_check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < ' ') || ((str[i] > ' ') && (str[i] < '1'))
			|| (str[i] > '4'))
		{
			ft_putstr("Error\n");
			return (0);
		}
		if (!(str[i] == ' ') && (i % 2 == 1))
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	ft_fill_check(str);
	return (0);
}
