/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpluck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 16:09:32 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:32:33 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_lstpluck(t_list *curr, t_list *to_del, void (*del)(void *, size_t))
{
	t_list	*tmpnext;

	if (!curr)
		return (NULL);
	if (curr == to_del)
	{
		tmpnext = curr->next;
		ft_lstdelone(&curr, del);
		return (tmpnext);
	}
	curr->next = ft_lstpluck(curr->next, to_del, del);
	return (curr);
}
