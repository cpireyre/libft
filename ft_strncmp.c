/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 16:48:41 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/13 14:04:56 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0 ;
	if (s1 == s2 || !n)
		return (0);
	while (--n && (t_byte)(*(s1 + i)) == (t_byte)(*(s2 + i)) && *s1 && *s2)
		i++;
	return ((t_byte)(*s1) - (t_byte)(*s2));
}
