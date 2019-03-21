/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:52:23 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 10:14:15 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

void	ft_print_int_tab(int *tab, int size)
{
	int	i;

	if (size < 1)
		ft_printf("Empty tab.\n");
	i = -1;
	while (++i < size)
		ft_printf("tab[%d] = %d ", i, tab[i]);
	ft_putchar('\n');
}
