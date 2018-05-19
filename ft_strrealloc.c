/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 09:20:58 by cpireyre          #+#    #+#             */
/*   Updated: 2018/05/15 07:51:57 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrealloc(char *str, size_t size)
{
	char	*realloc;

	realloc = ft_strnew(size);
	if (!realloc)
		return (NULL);
	if (str)
	{
		ft_strcpy(realloc, str);
		ft_strdel(&str);
	}
	return (realloc);
}