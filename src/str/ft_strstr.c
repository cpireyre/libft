/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 13:43:33 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:44:31 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strstr(const char *h, const char *n)
{
	if (!*n)
		return ((char*)h);
	while (!ft_strnequ(h, n, ft_strlen(n)) && *h)
		h++;
	return (*h ? (char*)h : NULL);
}
