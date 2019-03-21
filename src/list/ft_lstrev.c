/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 07:27:56 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:32:34 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_lstrev(t_list *head)
{
	t_list	*rev;

	if (!head || !head->next)
		return (head);
	rev = ft_lstrev(head->next);
	head->next->next = head;
	head->next = NULL;
	return (rev);
}
