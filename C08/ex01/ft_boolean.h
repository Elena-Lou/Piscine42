/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:58:27 by elouisia          #+#    #+#             */
/*   Updated: 2021/11/25 14:20:57 by elouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		1
# define FALSE		0
# define EVEN(x)	(x % 2 == 0)
# define EVEN_MSG	"I have an even number of arguments."
# define ODD_MSG	"I have an odd number of arguments."
# define SUCCESS	0

typedef int	t_bool;
#endif
