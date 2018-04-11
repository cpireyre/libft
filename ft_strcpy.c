/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:50:46 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/11 16:03:35 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	dst = ft_strncpy(dst, src, ft_strlen(src));
	*(dst + ft_strlen(src)) = 0;
	return (dst);
}
