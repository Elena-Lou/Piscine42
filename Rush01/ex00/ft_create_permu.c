/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_permu.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephauv <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:29:57 by ephauv            #+#    #+#             */
/*   Updated: 2021/08/15 21:28:31 by ephauv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	*ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	*tab;

	i = 0;
	nb = 0;
	tab = malloc(sizeof(int) * 4);
	while (str[i] >= '0' && str[i] <= '4')
	{
		tab[i] = str[i] - 48;
		i++;
	}
	return (tab);
}

void	permute(char *str, int l, int r, int **tab_permut)
{
	int	i;
	int	j;

	j = 0;
	if (l == r)
	{		
		while (tab_permut[j] != NULL)
			j++;
		tab_permut[j] = ft_atoi(str);
	}
	else
	{
		i = l;
		while (i <= r)
		{
			swap(&str[l], &str[i]);
			permute(str, l + 1, r, tab_permut);
			swap(&str[l], &str[i]);
			i++;
		}
	}
}

int	**make_permut(void)
{
	int		i;
	int		**tab_permut;
	char	*str;
	int		n;

	str = "1234";
	n = ft_strlen(str);
	tab_permut = malloc(sizeof(int *) * 24);
	i = 0;
	while (i < 24)
	{
		tab_permut[i] = NULL;
		i++;
	}
	permute(str, 0, n - 1, tab_permut);
	return (tab_permut);
}
