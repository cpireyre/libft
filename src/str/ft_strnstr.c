/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 14:55:04 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:43:24 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t i;

	i = 0;
	if (!*n)
		return ((char*)h);
	while (!ft_strnequ(h, n, ft_strlen(n)) && *h && i + ft_strlen(n) < len)
	{
		i++;
		h++;
	}
	return (*h && ft_strnequ(h, n, ft_strlen(n)) ? (char*)h : NULL);
}
