/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:32:34 by jdubilla          #+#    #+#             */
/*   Updated: 2021/08/22 12:48:28 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkstr(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			return (0);
		i++;
	}
	while (str[i + j])
	{
		if (str[i + j] == '.')
			return (0);
		if (str[i + j] >= '0' && str[i + j] <= '9')
			j++;
		else
			break ;
	}	
	return (j);
}
