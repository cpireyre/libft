/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 09:45:06 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/15 10:27:44 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *nbr)
{
	int		sum;
	int		sign;

	sum = 0;
	sign = 1;
	while (ft_isspace(*nbr))
		nbr++;
	if (*nbr == '-' || *nbr == '+')
	{
		sign = (*nbr == '-' ? -1 : 1);
		nbr++;
	}
	while (ft_isdigit(*nbr) || ft_isupper(*nbr))
	{
		sum *= 10;
		sum += *nbr - 48;
		nbr++;
	}
	return (sum * sign);
}
