/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 22:55:06 by jdubilla          #+#    #+#             */
/*   Updated: 2021/08/22 17:04:22 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_numbers(char *argv, int len, char **tab)
{
	int	nbr;

	nbr = 0;
	if (len == 2 && argv[0] == '1')
	{
		nbr = ((argv[0] - 48) * 10) + (argv[1] - 48);
		ft_putstr(tab[nbr]);
	}
	else if (len == 1)
	{
		nbr = ((argv[0] - 48) * 10) + (argv[1] - 48);
		ft_putstr(tab[argv[0] - 48]);
	}
	else if (len == 2)
	{
		if (argv[0] != '0')
		{
			nbr = ((argv[0] - 48) - 2 + 20);
			ft_putstr(tab[nbr]);
			ft_putchar(' ');
		}
		if (argv[1] != '0')
			ft_putstr(tab[argv[1] - 48]);
	}
}

void	ft_print_numbers2(char *argv, int len, char **tab)
{
	char	cpy[2];

	if (len == 3)
	{
		if (argv[0] != '0')
		{
			ft_putstr(tab[argv[0] - 48]);
			ft_putchar(' ');
			ft_putstr(tab[28]);
			ft_putchar(' ');
		}
		len--;
		cpy[0] = argv[1];
		cpy[1] = argv[2];
		ft_print_numbers(cpy, len, tab);
	}
	else
		ft_print_numbers(argv, len, tab);
}

void	ft_print_numbers3(char *argv, int len, char **tab)
{
	char	cpy[3];

	if (len == 4)
	{
		if (argv[0] != '0')
		{
			ft_putstr(tab[argv[0] - 48]);
			ft_putchar(' ');
			ft_putstr(tab[29]);
			ft_putchar(' ');
		}
		len--;
		cpy[0] = argv[1];
		cpy[1] = argv[2];
		cpy[2] = argv[3];
		ft_print_numbers2(cpy, len, tab);
	}
	else
		ft_print_numbers2(argv, len, tab);
}

void	ft_print_numbers4(char *argv, int len, char **tab)
{
	char	cpy[2];
	char	cpy2[3];

	if (len == 5)
	{
		cpy[0] = argv[0];
		cpy[1] = argv[1];
		ft_print_numbers(cpy, 2, tab);
		ft_putchar(' ');
		ft_putstr(tab[29]);
		ft_putchar(' ');
		len -= 2;
		cpy2[0] = argv[2];
		cpy2[1] = argv[3];
		cpy2[2] = argv[4];
		ft_print_numbers2(cpy2, len, tab);
	}
	else
		ft_print_numbers3(argv, len, tab);
}

void	ft_print_numbers5(char *argv, int len, char **tab)
{
	char	cpy[3];
	char	cpy2[3];

	if (len == 6)
	{
		cpy[0] = argv[0];
		cpy[1] = argv[1];
		cpy[2] = argv[2];
		ft_print_numbers2(cpy, 3, tab);
		ft_putchar(' ');
		ft_putstr(tab[29]);
		ft_putchar(' ');
		len -= 3;
		cpy2[0] = argv[3];
		cpy2[1] = argv[4];
		cpy2[2] = argv[5];
		ft_print_numbers2(cpy2, len, tab);
	}
	else
		ft_print_numbers4(argv, len, tab);
}
