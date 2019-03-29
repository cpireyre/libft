/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 11:48:29 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/29 12:37:33 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "conversions.h"
#include "str.h"

/*
**	wchar.h doesn't compile anymore...?
**	disabling unicode support for now.
**	g_conversions[12] = (t_conv){'S', &mb_string};
**	g_conversions[11] = (t_conv){'C', &mb_char};
*/

static void			init_printf(t_printf *data, va_list *ap)
{
	data->ap = ap;
	data->buf.filedesc = 1;
	data->buf.written_total = 0;
	data->buf.pos = 0;
	data->error = false;
	g_conversions[0] = (t_conv){'d', &signed_dec};
	g_conversions[1] = (t_conv){'i', &signed_dec};
	g_conversions[2] = (t_conv){'c', &unichar};
	g_conversions[3] = (t_conv){'o', &u_octal};
	g_conversions[4] = (t_conv){'u', &u_dec};
	g_conversions[5] = (t_conv){'x', &u_hex_low};
	g_conversions[6] = (t_conv){'X', &u_hex_upp};
	g_conversions[7] = (t_conv){'D', &l_signed_dec};
	g_conversions[8] = (t_conv){'O', &l_u_octal};
	g_conversions[9] = (t_conv){'U', &l_u_dec};
	g_conversions[10] = (t_conv){'s', &string};
	g_conversions[11] = (t_conv){'C', &unichar};
	g_conversions[12] = (t_conv){'S', &string};
	g_conversions[13] = (t_conv){'p', &ptr_addr};
}

int					convert(t_printf *data, const char *format)
{
	size_t	j;
	void	(*conv)(t_printf *);

	j = 1;
	if (format[j] == '%')
		putc_buf(&data->buf, '%');
	else
	{
		while (format[j] && !ft_strchr(CONVERSIONS, format[j]))
			j++;
		if (format[j])
		{
			data->op = get_op(format);
			data->conv = format[j];
			conv = get_conversion(*(format + j));
			conv(data);
		}
	}
	return (j);
}

int			ft_printf(const char *format, ...)
{
	t_printf	data;
	va_list		ap;
	size_t		i;

	va_start(ap, format);
	init_printf(&data, &ap);
	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
			i += convert(&data, format + i);
		else
			putc_buf(&data.buf, format[i]);
		i++;
	}
	flush_buf(&data.buf);
	return (data.error == true ? -1 : (int)data.buf.written_total);
}
