/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:58:31 by cpireyre          #+#    #+#             */
/*   Updated: 2019/02/28 14:18:21 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		{
			next = left;
			left = left->next;
		}
		else if (!left)
		{
			next = right;
			right = right->next;
		}
		else if (compare(left, right) < 0)
		{
			next = left;
			left = left->next;
		}
		else
		{
			next = right;
			right = right->next;
		}
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
