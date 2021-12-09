/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 21:16:09 by elouisia          #+#    #+#             */
/*   Updated: 2021/08/20 11:28:34 by elouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (!(*to_find))
		return (str);
	while (str[++i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
	}
	return (0);
}
