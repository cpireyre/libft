/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 10:10:41 by cpireyre          #+#    #+#             */
/*   Updated: 2019/06/22 17:09:42 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "math.h"
#include "str.h"

void	string(t_printf *arg)
{
	char	*str;
	int		pad;

	str = va_arg(*(arg->ap), char*);
	if (!str)
		str = "(null)";
	pad = arg->op.fw - (arg->op.fl & FLAG_PREC
			? (size_t)ft_min(ft_strlen(str), arg->op.prec) : ft_strlen(str));
	if (pad > 0 && !(arg->op.fl & FLAG_DASH))
		repeat_buf(&arg->buf, PAD, pad);
	if (arg->op.fl & FLAG_PREC)
		putnstr_buf(&arg->buf, str, arg->op.prec);
	else
		putstr_buf(&arg->buf, str);
	if (pad > 0 && (arg->op.fl & FLAG_DASH))
		repeat_buf(&arg->buf, PAD, pad);
}
