/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkparams.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:00:06 by jdubilla          #+#    #+#             */
/*   Updated: 2021/08/22 12:31:26 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_checkparams(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		return (-1);
	if (argc == 2)
	{
		if (ft_checkstr(argv[1]) == 0)
			return (-1);
	}
	if (argc == 3)
	{
		if (ft_checkstr(argv[2]) == 0)
			return (-1);
	}
	return (1);
}
