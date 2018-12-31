/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 09:31:48 by cpireyre          #+#    #+#             */
/*   Updated: 2018/12/31 15:37:04 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	size_t	digits;
	long	nbr;
	char	*str;
	char	*basestr;
	t_bool	sign;

	if (!(2 <= base && base <= 16))
		return (NULL);
	sign = (n < 0 && base == 10) ? 1 : 0;
	basestr = "0123456789ABCDEF";
	digits = sign + 1;
	nbr = (long)n * (n < 0 ? -1 : 1);
	while (n /= base)
		digits++;
	str = ft_strnew(digits);
	if (sign)
		str[0] = '-';
	while (digits-- - sign)
	{
		str[digits] = basestr[(nbr % base)];
		nbr /= base;
	}
	return (str);
}
