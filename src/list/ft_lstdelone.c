/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 09:49:00 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:33:35 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "mem.h"

void	ft_lstdelone(t_list **a, void (*del)(void *, size_t))
{
	if (a)
	{
		del((*a)->content, (*a)->content_size);
		ft_memdel((void**)a);
	}
}
