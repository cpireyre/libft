/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:05:03 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/11 15:12:55 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(str);
	dup = ft_memcpy(ft_memalloc(len), str, len);
	*(dup + len) = 0;
	return (dup);
}
