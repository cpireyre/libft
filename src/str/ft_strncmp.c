/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 16:48:41 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:42:41 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "math.h"
#include "mem.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t l;

	l = ft_min(ft_min(ft_strlen(s1) + 1, ft_strlen(s2) + 1), n);
	return (ft_memcmp(s1, s2, l));
}
