/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dicototab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:49:06 by jdubilla          #+#    #+#             */
/*   Updated: 2021/08/22 14:44:54 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_header.h"

char	*ft_dicototab(char *buf, int argc, char **argv)
{
	int	fd;
	int	ret;

	if (argc == 3)
		fd = open(argv[1], O_RDONLY);
	else
		fd = open("dico.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Erreur lors de l'ouverture du ficher");
		return (0);
	}
	ret = read(fd, buf, 4096);
	buf[ret] = '\0';
	if (close(fd) == -1)
	{
		ft_putstr("Erreur lors de la fermeture du fichier.");
		return (0);
	}
	return (buf);
}
