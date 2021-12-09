/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 23:14:25 by elouisia          #+#    #+#             */
/*   Updated: 2021/08/23 20:02:55 by elouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_basecheck(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 3)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == '\n'
			|| base[i] == '\t' || base[i] == ' ')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_atoi_check(char *str, int *i, int *neg)
{
	*i = 0;
	while (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\v'
		|| str[*i] == '\f' || str[*i] == '\r' || str[*i] == ' ')
		*i = *i + 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*neg *= -1;
		*i = *i + 1;
	}
}

int	ft_atoi(char *str, int *i, int *neg, char *base)
{
	int	j;
	int	nb;
	int	baselen;

	nb = 0;
	baselen = ft_strlen(base);
	while (str[*i])
	{
		j = 0;
		while (base[j] != str[*i] && base[j])
			j++;
		if (base[j] != '\0')
		{
			nb = (nb * baselen) + j;
			*i = *i + 1;
		}
		else
			return (nb * *neg);
	}
	return (nb * *neg);
}

int	ft_atoi_base(char *str, char *base)
{
	int	baselen;
	int	i;
	int	neg;
	int	nb;

	i = 0;
	neg = 1;
	nb = 0;
	baselen = ft_strlen(base);
	if (ft_basecheck(base) == 0)
		return (0);
	ft_atoi_check(str, &i, &neg);
	return (ft_atoi(str, &i, &neg, base));
}
