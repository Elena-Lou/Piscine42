/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:26:54 by jdubilla          #+#    #+#             */
/*   Updated: 2021/08/22 17:21:11 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

void	ft_putchar(char c);
void	ft_putstr(char	*s1);
int		ft_checkparams(int argc, char **argv);
int		ft_checkstr(char *str);
char	**ft_split(char *str, char *charset);
char	*ft_dicototab(char *buf, int argc, char **argv);
void	ft_print_numbers(char *argv, int len, char **tab);
void	ft_print_numbers2(char *argv, int len, char **tab);
void	ft_print_numbers3(char *argv, int len, char **tab);
void	ft_print_numbers4(char *argv, int len, char **tab);
void	ft_print_numbers5(char *argv, int len, char **tab);
void	ft_print_million(char *argv, int len, char **tab);

#endif
