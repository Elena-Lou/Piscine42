/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:30:45 by jdubilla          #+#    #+#             */
/*   Updated: 2021/08/22 17:47:21 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft_header.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		lenstr;
	char	buf[4097];
	char	**tab;

	if (ft_checkparams(argc, argv) == -1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	lenstr = ft_checkstr(argv[argc - 1]);
	if (lenstr > 37)
		ft_putstr("Error\n");
	if (lenstr > 7)
		ft_putstr("Dict Error\n");
	ft_dicototab(buf, argc, argv);
	tab = ft_split(buf, "\n");
	ft_print_million(argv[argc - 1], lenstr, tab);
	free(tab);
	return (0);
}
