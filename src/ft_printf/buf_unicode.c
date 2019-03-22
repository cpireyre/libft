/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_unicode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 09:50:33 by cpireyre          #+#    #+#             */
/*   Updated: 2018/06/23 09:52:49 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buf.h"
#define THREE_ONES

void	putc_buf_unicode(t_buf *buf, wchar_t uchar)
{
	if (uchar < 128)
		putc_buf(buf, uchar);
	else if (uchar < 2048)
	{
		putc_buf(buf, 0xC0 | ((uchar >> 6) & 0x1F));
		putc_buf(buf, 0x80 | (uchar & 0x3F));
	}
	else if (uchar < 65536)
	{
		putc_buf(buf, 0xE0 | ((uchar >> 12) & 0xF));
		putc_buf(buf, 0x80 | ((uchar >> 6) & 0x3F));
		putc_buf(buf, 0x80 | (uchar & 0x3F));
	}
	else
	{
		putc_buf(buf, 0xF0 | ((uchar >> 18) & 0x7));
		putc_buf(buf, 0x80 | ((uchar >> 12) & 0x3F));
		putc_buf(buf, 0x80 | ((uchar >> 6) & 0x3F));
		putc_buf(buf, 0x80 | (uchar & 0x3F));
	}
}

void	putstr_buf_unicode(t_buf *buf, wchar_t *ustr)
{
	while (*ustr)
	{
		putc_buf_unicode(buf, *ustr);
		ustr++;
	}
}

void	putnstr_buf_unicode(t_buf *buf, wchar_t *ustr, int n)
{
	int		i;

	i = 0;
	while (*ustr && i < n)
	{
		if (*ustr < 128)
			i += 1;
		else if (*ustr < 2048)
			i += 2;
		else if (*ustr < 65536)
			i += 3;
		else
			i += 4;
		if (i <= n)
			putc_buf_unicode(buf, *ustr);
		ustr++;
	}
}
