/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 10:13:29 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:56:29 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buf.h"
#include "mem.h"
#include "str.h"
#include <unistd.h>

void			flush_buf(t_buf *buf)
{
	if (buf->pos)
	{
		write(buf->filedesc, buf->tab, buf->pos);
		buf->pos = 0;
	}
}

void			putc_buf(t_buf *buf, char c)
{
	buf->tab[buf->pos] = c;
	buf->pos++;
	buf->written_total++;
	if (buf->pos == BUFSIZ)
		flush_buf(buf);
}

/*
**	TODO
**	use memcpy instead
**	probably makes the below function obsolete, too
*/

void			putstr_buf(t_buf *buf, char *str)
{
	putnstr_buf(buf, str, ft_strlen(str));
}

/*
**	TODO
**	use memcpy instead
*/

void			putnstr_buf(t_buf *buf, char *str, int n)
{
	int	copied;

	copied = BUFSIZ - buf->pos;
	if (buf->pos + n < BUFSIZ)
	{
		ft_memcpy(buf->tab + buf->pos, str, sizeof(char) * n);
		buf->pos += n;
		buf->written_total += n;
	}
	else
	{
		ft_memcpy(buf->tab + buf->pos, str, sizeof(char) * (copied));
		buf->pos += copied;
		buf->written_total += copied;
		flush_buf(buf);
		putnstr_buf(buf, str + copied, n - (copied));
	}
}

void			repeat_buf(t_buf *buf, char c, int num)
{
	int		copied;

	copied = BUFSIZ - buf->pos;
	if (buf->pos + num < BUFSIZ)
	{
		ft_memset(buf->tab + buf->pos, c, sizeof(char) * num);
		buf->pos += num;
		buf->written_total += num;
	}
	else
	{
		ft_memset(buf->tab + buf->pos, c, sizeof(char) * (copied));
		buf->pos += copied;
		buf->written_total += copied;
		flush_buf(buf);
		repeat_buf(buf, c, num - (copied));
	}
}
