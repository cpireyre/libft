/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_unicode.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 08:40:13 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 10:15:56 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

void	ft_putstr_unicode(wchar_t *ustr)
{
	while (*ustr)
	{
		ft_putchar_unicode(*ustr);
		ustr++;
	}
}
