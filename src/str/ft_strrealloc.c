/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 09:20:58 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:43:39 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strrealloc(char *str, size_t size)
{
	char	*realloc;

	realloc = ft_strnew(size);
	if (str)
	{
		ft_strcpy(realloc, str);
		ft_strdel(&str);
	}
	return (realloc);
}
