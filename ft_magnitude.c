/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_magnitude.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 13:26:47 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/12 14:06:41 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_magnitude(int n)
{
	size_t p;

	p = 1;
	n = ft_abs(n);
	while ((n /= 10) > 0)
		p++;
	return (p);
}