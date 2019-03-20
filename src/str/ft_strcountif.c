/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcountif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 10:08:29 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:41:42 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fttypes.h"

int	ft_strcountif(const char *str, t_bool (*check)(char))
{
	int		count;

	count = 0;
	while (*str)
	{
		count += check(*str);
		str++;
	}
	return (count);
}
