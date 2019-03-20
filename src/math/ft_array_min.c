/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 10:09:48 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:21:02 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

int		ft_array_min(int *array, int size)
{
	int		index;
	int		min;

	index = 0;
	min = array[0];
	while (++index < size)
		min = ft_min(min, array[index]);
	return (min);
}
