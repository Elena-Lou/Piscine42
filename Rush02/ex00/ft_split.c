/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:47:36 by jdubilla          #+#    #+#             */
/*   Updated: 2021/08/22 17:47:24 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_testchar(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
}

int	ft_taillemot(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && (ft_testchar(str + i, charset) == 0))
		i++;
	return (i);
}

int	ft_nbrmots(char *str, char *charset)
{
	int	i;
	int	mots;

	mots = 0;
	while (*str)
	{
		while (*str && ft_testchar(str, charset))
			str++;
		i = ft_taillemot(str, charset);
		str += i;
		if (i > 0)
			mots++;
	}
	return (mots);
}

char	*ft_cpymot(char *src, int n)
{
	char	*dest;

	dest = malloc((n + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		tailletab;
	int		i;
	int		lenmot;

	tailletab = ft_nbrmots(str, charset);
	res = malloc((tailletab + 1) * sizeof(char *));
	if (!(res))
		return (NULL);
	i = -1;
	while (++i < tailletab)
	{
		while (*str && ft_testchar(str, charset))
			str++;
		lenmot = ft_taillemot(str, charset);
		res[i] = ft_cpymot(str, lenmot);
		if (!(res))
			return (NULL);
		str += lenmot;
	}
	res[tailletab] = 0;
	return (res);
}
