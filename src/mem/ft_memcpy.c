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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_byte *pdst;
	t_byte *psrc;

	pdst = (t_byte*)dst;
	psrc = (t_byte*)src;
	while (n--)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
	}
	return (dst);
}
