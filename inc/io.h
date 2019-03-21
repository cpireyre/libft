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
void	ft_putchar(char c) __attribute__((always_inline));
void	ft_putchar_fd(char c, int fd) __attribute__((always_inline));
void	ft_putchar_unicode(wchar_t uchar);
void	ft_putendl(char const *s) __attribute__((always_inline));
void	ft_putendl_fd(char const *s, int fd) __attribute__((always_inline));
void	ft_putnbr(int n) __attribute__((always_inline));
void	ft_putnbr_endl(int n) __attribute__((always_inline));
void	ft_putnbr_fd(int n, int fd) __attribute__((always_inline));
void	ft_putstr(char const *str) __attribute__((always_inline));
void	ft_putstr_fd(char const *s, int fd) __attribute__((always_inline));
void	ft_putstr_unicode(wchar_t *ustr) __attribute__((always_inline));
void	ft_putnstr(const char *str, size_t n) __attribute__((always_inline));

#endif
