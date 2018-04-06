/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:30:56 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/06 11:44:59 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int					ft_isalnum(char c);
int					ft_isalpha(char c);
int					ft_isascii(char c);
int					ft_isdigit(char c);
size_t				ft_strlen(const char *str);
int					ft_isprint(char c);
int					ft_toupper(char c);
int					ft_tolower(char c);
void				ft_putchar(char c);
void				ft_putstr(char *str);
unsigned char		ft_islower(char c);
unsigned char		ft_isupper(char c);
unsigned char		ft_iswithin(char c, unsigned char bgn, unsigned char end);

#endif
