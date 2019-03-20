/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:58:31 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:32:36 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static t_list		*ft_lsthalf(t_list *list)
{
	t_list	*half;
	t_list	*last;
	t_list	*tmp;

	half = list;
	last = list;
	tmp = list;
	while (last && last->next)
	{
		half = tmp;
		tmp = tmp->next;
		last = last->next->next;
	}
	return (half);
}

static void			assign(t_list **next, t_list **toassign)
{
	*next = *toassign;
	*toassign = (*toassign)->next;
}

static t_list		*ft_lstmerge(t_list *left, t_list *right, \
int (*compare)(t_list *one, t_list *two))
{
	t_list	*result;
	t_list	*next;
	t_list	*tail;

	result = NULL;
	next = NULL;
	tail = NULL;
	while (left || right)
	{
		if (!right)
			assign(&next, &left);
		else if (!left)
			assign(&next, &right);
		else if (compare(left, right) < 0)
			assign(&next, &left);
		else
			assign(&next, &right);
		if (!result)
			result = next;
		else
			tail->next = next;
		tail = next;
	}
	return (result);
}

t_list				*ft_lstsort(t_list *list, \
int (*compare)(t_list *one, t_list *two))
{
	t_list	*right;
	t_list	*half;

	if (!list || !list->next)
		return (list);
	half = ft_lsthalf(list);
	right = half->next;
	half->next = 0;
	list = ft_lstsort(list, compare);
	right = ft_lstsort(right, compare);
	return (ft_lstmerge(list, right, compare));
}
