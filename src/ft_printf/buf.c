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
#include <unistd.h>

void			flush_buf(t_buf *buf)
{
	if (buf->written)
	{
		write(buf->filedesc, buf->tab, buf->written);
		buf->written = 0;
	}
}

void			putc_buf(t_buf *buf, char c)
{
	buf->tab[buf->written] = c;
	buf->written++;
	if (buf->written == BUFF_SIZE)
		flush_buf(buf);
}

/*
**	TODO
**	use memcpy instead
**	probably makes the below function obsolete, too
*/

void			putstr_buf(t_buf *buf, char *str)
{
	while (*str)
	{
		putc_buf(buf, *str);
		str++;
	}
}

/*
**	TODO
**	use memcpy instead
*/

void			putnstr_buf(t_buf *buf, char *str, int n)
{
	int	i;

	i = 0;
	while (str[i] && i < n)
	{
		putc_buf(buf, str[i]);
		i++;
	}
}

/*
**	TODO:
**	use memset instead
*/

void			repeat_buf(t_buf *buf, char c, int num)
{
	while (num)
	{
		putc_buf(buf, c);
		num--;
	}
}
