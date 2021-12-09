/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephauv <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 09:26:16 by ephauv            #+#    #+#             */
/*   Updated: 2021/08/15 20:37:33 by elouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	**ft_malloc(void)
{
	int	i;
	int	**tab_check;

	i = 0;
	tab_check = malloc(sizeof(int*) * 4);
	if (!tab_check)
		return (0);
	while (i < 4)
	{
		tab_check[i] = malloc(sizeof(int) * 4);
		if (!tab_check[i])
			return (0);
		i++;
	}
	return(tab_check);
}

int	**ft_fill_check(char *str)
{
	int	i;
	int	**tab_check;
	int	j;
	int	k;

	tab_check = ft_malloc();
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		if ((i % 8 == 0) && (i > 0))
		{
			j++;
			k = 0;
		}
		if (str[i] >= '1' && str[i] <= '4')
		{
			tab_check[j][k] = str[i] - '0';
			k++;
			i++;
		}
	}
	return (tab_check);
}
