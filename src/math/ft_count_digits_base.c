/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:54:06 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:21:14 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

int		ft_count_digits_base(intmax_t n, int base)
{
	int	count;

	count = 1;
	while ((n = (n / base)))
		count++;
	return (count);
}
