/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 16:04:14 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:32:19 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_lstappend(t_list **node, t_list *new_node)
{
	if (new_node)
	{
		if (*node)
		{
			ft_lstlast(*node)->next = new_node;
			new_node->next = NULL;
		}
		else
		{
			ft_lstadd(node, new_node);
		}
	}
}
