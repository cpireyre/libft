/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:20:50 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:42:02 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strdup(const char *str)
{
	char *dup;

	dup = ft_strnew(ft_strlen(str));
	dup = ft_strcpy(dup, str);
	return (dup);
}
