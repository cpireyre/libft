/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:36:54 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:42:29 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new = ft_strnew(len);
	if (!new)
		return (NULL);
	while (*s)
	{
		*new = f(*s);
		new++;
		s++;
	}
	return (new - len);
}
