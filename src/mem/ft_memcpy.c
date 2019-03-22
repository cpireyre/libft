/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 09:11:08 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:15:45 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

typedef	int64_t	__attribute__((__may_alias__))	i64;

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	t_byte 		*pdst;
	t_byte 		*psrc;
	i64			*lpdst;
	i64			*lpsrc;

	lpdst = (i64*)dst;
	lpsrc = (i64*)src;
	while (n > 32)
	{
		lpdst[0] = lpsrc[0];
		lpdst[1] = lpsrc[1];
		lpdst[2] = lpsrc[2];
		lpdst[3] = lpsrc[3];
		lpdst += 4;
		lpsrc += 4;
		n -= 32;
	}
	pdst = (t_byte*)lpdst;
	psrc = (t_byte*)lpsrc;
	while (n--)
		*pdst++ = *psrc++;
	return (dst);
}
