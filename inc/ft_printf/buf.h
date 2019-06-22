/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 10:13:37 by cpireyre          #+#    #+#             */
/*   Updated: 2019/06/22 17:10:51 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUF_H
# define BUF_H

# include <stdio.h>

typedef struct		s_buf
{
	size_t	written_total;
	size_t	pos;
	int		filedesc;
	char	tab[BUFSIZ];
}					t_buf;

void				flush_buf(t_buf *buf);
void				putc_buf(t_buf *buf, char c);
void				putstr_buf(t_buf *buf, char *str);
void				repeat_buf(t_buf *buf, char c, int num);
void				putnstr_buf(t_buf *buf, char *str, int n);

#endif
