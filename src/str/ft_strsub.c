/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:29:35 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:44:40 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "mem.h"

char	*ft_strsub(char const *s, unsigned int o, size_t len)
{
	char *sub;

	if (!s)
		return (NULL);
	sub = ft_strnew(len);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + o, len);
	return (sub);
}
