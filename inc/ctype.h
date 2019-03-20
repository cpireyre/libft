/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctype.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 10:06:55 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:27:29 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CTYPE_H
# define CTYPE_H

# include "fttypes.h"

int			ft_toupper(int c) __attribute__((const));
int	   		ft_tolower(int c) __attribute__((const));
t_bool		ft_isupper(int c) __attribute__((const));
t_bool		ft_isspace(char c) __attribute__((const));
t_bool		ft_isprint(int c) __attribute__((const));
t_bool		ft_islower(int c) __attribute__((const));
t_bool		ft_isdigit(int c) __attribute__((const));
t_bool		ft_isdash(char to_check) __attribute__((const));
t_bool		ft_isblank(int c) __attribute__((const));
t_bool		ft_isalpha(int c) __attribute__((const));
t_bool		ft_isalnum(int c) __attribute__((const));

#endif
