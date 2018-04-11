/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:20:50 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/11 16:06:39 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char *dup;

	dup = ft_strnew(ft_strlen(str));
	if (!dup)
		return (NULL);
	dup = ft_strcpy(dup, str);
	return (dup);
}
