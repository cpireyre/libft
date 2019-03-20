/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_base_unsigned.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 09:11:47 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:21:20 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

int		ft_count_digits_base_u(uintmax_t n, int base)
{
	int	count;

	count = 1;
	while ((n = (n / base)))
		count++;
	return (count);
}
