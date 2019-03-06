/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremoveif.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 10:49:58 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/06 14:52:50 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstremoveif(t_list *head, t_bool (*should_del)(t_list*), \
void (*del)(void *, size_t))
{
	t_list	*ptr;
	t_list	*newhead;

	ptr = head;
	newhead = head;
	while (ptr)
	{
		if (should_del(ptr))
		{
			if (ptr == head)
				newhead = head->next;
			ptr = ft_lstpluck(head, ptr, del);
			head = newhead;
		}
		else
			ptr = ptr->next;
	}
	return (head);
}
