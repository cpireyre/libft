/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 10:04:19 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:51:14 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CTRL_H
# define CTRL_H

# include "fttypes.h"

t_bool				ft_isoption(const char *arg) __attribute__((pure));
void				ft_exit(const char *errmsg, int status);
void				ft_swap_int(int *a, int *b) __attribute__((always_inline));
void				ft_swap(char *a, char *b) __attribute__((always_inline));
unsigned long long	ft_options(int argc, char **argv) __attribute__((pure));

#endif
