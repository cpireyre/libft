/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 11:54:50 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:15:05 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

typedef	int64_t	__attribute__((__may_alias__))	i64;

static void	write_sixtyfour_bytes(i64 *bigptr, i64 pattern)
{
	bigptr[0] = pattern;
	bigptr[1] = pattern;
	bigptr[2] = pattern;
	bigptr[3] = pattern;
	bigptr[4] = pattern;
	bigptr[5] = pattern;
	bigptr[6] = pattern;
	bigptr[7] = pattern;
}

void		*ft_memset(void *b, int c, size_t len)
{
	i64		*bigptr;
	i64		pattern;
	t_byte	*pb;

	bigptr = (i64*)b;
	pattern = (t_byte)c;
	pattern |= pattern << 8;
	pattern |= pattern << 16;
	pattern |= pattern << 32;
	while (len > 64)
	{
		write_sixtyfour_bytes(bigptr, pattern);
		bigptr += 8;
		len -= 64;
	}
	pb = (t_byte*)bigptr;
	while (len--)
		*pb++ = (t_byte)c;
	return (b);
}
