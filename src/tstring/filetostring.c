/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filetostring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:48:15 by cpireyre          #+#    #+#             */
/*   Updated: 2019/06/22 17:07:52 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include "mem.h"
#include "str.h"
#include "errcodes.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static int	copy_array(char **old_ptr, ssize_t *curr, ssize_t data_amount)
{
	char	*new_ptr;

	*curr *= 2;
	new_ptr = malloc(sizeof(char) * *curr);
	if (!new_ptr)
	{
		ft_strdel(old_ptr);
		return (MALLOC_ERR);
	}
	ft_memcpy(new_ptr, *old_ptr, sizeof(char) * data_amount);
	ft_strdel(old_ptr);
	*old_ptr = new_ptr;
	return (SUCCESS);
}

static int	fill_buffer(int fd, t_str *buf)
{
	ssize_t	bytes_read;
	ssize_t	space;
	int		errcode;

	space = BUFSIZ;
	while (1)
	{
		bytes_read = read(fd, buf->str + buf->length, BUFSIZ);
		if (bytes_read == -1)
		{
			ft_strdel(&buf->str);
			return (READ_ERR);
		}
		else if (bytes_read < BUFSIZ)
			return (SUCCESS);
		buf->length += bytes_read;
		if (space - buf->length < BUFSIZ)
		{
			errcode = copy_array(&buf->str, &space, buf->length);
			if (errcode == MALLOC_ERR)
				return (MALLOC_ERR);
		}
	}
}

int			file_to_string(int fd, t_str *buf)
{
	buf->str = malloc(sizeof(char) * BUFSIZ);
	if (!buf->str)
		return (MALLOC_ERR);
	buf->length = 0;
	return (fill_buffer(fd, buf));
}
