/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 11:51:15 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:17:53 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "mem.h"
#include "ctrl.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size);
	if (!mem)
		ft_exit("Memory allocation failure.", EXIT_FAILURE);
	ft_bzero(mem, size);
	return (mem);
}
