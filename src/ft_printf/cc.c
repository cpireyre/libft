/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 10:08:06 by cpireyre          #+#    #+#             */
/*   Updated: 2019/06/22 17:09:48 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pad_left_text(t_printf *arg)
{
	if (arg->op.fw > 1 && !(arg->op.fl & FLAG_DASH))
		repeat_buf(&arg->buf, PAD, arg->op.fw - 1);
}

void	pad_right_text(t_printf *arg)
{
	if (arg->op.fw > 1 && (arg->op.fl & FLAG_DASH))
		repeat_buf(&arg->buf, PAD, arg->op.fw - 1);
}

void	unichar(t_printf *arg)
{
	unsigned char	c;

	c = (unsigned char)va_arg(*(arg->ap), int);
	pad_left_text(arg);
	putc_buf(&arg->buf, c);
	pad_right_text(arg);
}
