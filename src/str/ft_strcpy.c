/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:50:46 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:41:47 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strcpy(char *dst, const char *src)
{
	dst = ft_strncpy(dst, src, ft_strlen(src));
	*(dst + ft_strlen(src)) = 0;
	return (dst);
}
