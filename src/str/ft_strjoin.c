/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 15:29:54 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:42:18 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	str = ft_strcpy(str, (char*)s1);
	str = ft_strcat(str, (char*)s2);
	return (str);
}
