/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 15:05:11 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:42:32 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (j < n && s2[j])
		s1[i++] = s2[j++];
	s1[i] = 0;
	return (s1);
}
