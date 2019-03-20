/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:33:02 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:42:54 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "mem.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t len;

	len = ft_strlen(src);
	ft_memcpy(dst, src, n);
	if (len < n)
		ft_memset(dst + len, 0, n - len);
	return (dst);
}
