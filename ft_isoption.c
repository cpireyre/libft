/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isoption.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:19:26 by cpireyre          #+#    #+#             */
/*   Updated: 2019/02/20 09:29:57 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_isoption(const char *arg)
{
	const char *ptr;

	ptr = arg;
	if (!ptr || *ptr != '-')
		return (0);
	while (*(++ptr))
		if (!ft_isalpha(*ptr))
			return (0);
	return (1);
}
