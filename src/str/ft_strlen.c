/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 10:16:24 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:45:24 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stddef.h>

#define ONES ((size_t)-1 / 255)
#define HIGHS (ONES * ((255 >> 2) + 1))

__attribute__((always_inline))
static inline int	haszero(size_t w)
{
	if ((w - ONES) & ~(w) & HIGHS)
		return (1);
	else
		return (0);
}

size_t	ft_strlen(const char *restrict s)
{
	const size_t	*ptr;
	const char		*save;

	save = s;
	while ((uintptr_t)(s) % sizeof(size_t))
		if (!*s)
			return (s - save);
	ptr = (const void*)(s);
	while (!(haszero(*ptr)))
		ptr++;
	s = (const char *)ptr;
	while (*s)
		s++;
	return (s - save);
}
