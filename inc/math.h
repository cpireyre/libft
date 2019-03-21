/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 10:22:39 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:24:50 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include "attributes.h"
# include <stddef.h>
# include <stdint.h>

void	ft_quicksort(int *tab, int size);
void	ft_sort_tab(int *tab, size_t size);

int		ft_tab_avg(int *tab, int size) __attribute__((pure));
int		ft_array_min(int *array, int size) __attribute__((pure));

int		ft_count_digits_base_u(uintmax_t n, int b) __attribute__((const));
int		ft_count_digits_base(intmax_t n, int base) __attribute__((const));
int		ft_sqrt(int n) __attribute__((const));
int		ft_abs(int n) __attribute__((const));

int		ft_min(int a, int b) __attribute__((CONST_INLINE));
int		ft_max(int a, int b) __attribute__((CONST_INLINE));

#endif
