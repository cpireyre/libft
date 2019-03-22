/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 10:16:03 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:30:37 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# include "fttypes.h"

int		ft_printf(const char *format, ...) __attribute__((format(printf,1,2)));
int		ft_gnl(const int fd, char **line);
void	ft_print_bits(t_byte octet);
void	ft_print_int_tab(int *tab, int size);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_endl(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnstr(const char *str, size_t n);

#endif
