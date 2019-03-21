/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 08:44:14 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:17:09 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*realloc;

	realloc = ft_memalloc(size);
	if (ptr)
	{
		ft_memcpy(realloc, ptr, size);
		ft_memdel(&ptr);
	}
	return (realloc);
}
