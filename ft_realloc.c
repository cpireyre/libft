/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 08:44:14 by cpireyre          #+#    #+#             */
/*   Updated: 2018/05/05 09:51:58 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*realloc;

	realloc = ft_memalloc(size);
	if (!realloc)
		return (NULL);
	ft_memcpy(realloc, ptr, sizeof(ptr));
	ft_putendl((char*)realloc);
	ft_memdel(&ptr);
	return (realloc);
}
