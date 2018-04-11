/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 08:46:35 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/10 09:05:15 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, size_t n, int c)
{
	t_byte *pd;
	t_byte *ps;

	pd = (t_byte*)d;
	ps = (t_byte*)s;
	c = (t_byte)c;
	while (n-- && *ps != c)
	{
		*pd = *ps;
		pd++;
		ps++;
		if (*ps == c)
			return ((t_byte)d);
	}
	return (NULL);
}
