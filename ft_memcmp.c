/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 14:03:08 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/09 15:37:38 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_byte *ps1;
	t_byte *ps2;

	ps1 = (t_byte*)s1;
	ps2 = (t_byte*)s2;
	if (s1 == s2 || !n)
		return (0);
	while (--n && *ps1 == *ps2)
	{
		ps1++;
		ps2++;
	}
	return (*ps1 - *ps2);
}
