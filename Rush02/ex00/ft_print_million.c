/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_million.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:02:47 by jdubilla          #+#    #+#             */
/*   Updated: 2021/08/22 17:47:28 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_million(char *argv, int len, char **tab)
{
	char	cpy[1];
	char	cpy2[6];

	if (len == 7)
	{
		cpy[0] = argv[0];
		ft_print_numbers(cpy, 1, tab);
		ft_putchar(' ');
		ft_putstr(tab[30]);
		ft_putchar(' ');
		cpy2[0] = argv[1];
		cpy2[1] = argv[2];
		cpy2[2] = argv[3];
		cpy2[3] = argv[4];
		cpy2[4] = argv[5];
		cpy2[5] = argv[6];
		len--;
		ft_print_numbers5(cpy2, len, tab);
	}
	else
		ft_print_numbers5(argv, len, tab);
}
