/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:54:06 by cpireyre          #+#    #+#             */
/*   Updated: 2018/06/14 07:43:46 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_digits_base(long long n, int base)
{
	int	count;

	count = 1 + ((n < 0) ? 1 : 0);
	while ((n = (n / base)))
		count++;
	return (count);
}
