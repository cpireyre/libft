/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 13:17:06 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/12 14:07:00 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*nbr;
	size_t			len;
	t_byte			sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = (n < 0) ? 1 : 0;
	n = ft_abs(n);
	len = ft_magnitude(n) + sign;
	nbr = ft_strnew(len);
	if (!nbr)
		return (NULL);
	while (len--)
	{
		*(nbr + len) = n % 10 + 48;
		n /= 10;
	}
	if (sign)
		*nbr = '-';
	return (nbr);
}
