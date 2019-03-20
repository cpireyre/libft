/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 18:00:50 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:44:02 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"

size_t	ft_strsplen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	return (i);
}
