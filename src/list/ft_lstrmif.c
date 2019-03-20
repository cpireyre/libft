/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremoveif.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 10:49:58 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:36:40 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_lstrmif(t_list *h, t_bool (*c)(t_list*), void (*d)(void *, size_t))
{
	t_list	*ptr;
	t_list	*newhead;

	ptr = h;
	newhead = h;
	while (ptr)
	{
		if (c(ptr))
		{
			if (ptr == h)
				newhead = h->next;
			ptr = ft_lstpluck(h, ptr, d);
			h = newhead;
		}
		else
			ptr = ptr->next;
	}
	return (h);
}
