/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 15:59:32 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:43:29 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t offset;

	offset = ft_strlen(s) + 1;
	while (offset--)
		if (*(s + offset) == c)
			return ((char*)s + offset);
	return (NULL);
}
