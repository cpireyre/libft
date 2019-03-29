/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addelem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 13:04:52 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/29 16:02:06 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"
#include "str.h"
#include "errcodes.h"

int		hashtable_addelem(t_ht *ht, const char *key, size_t len)
{
	uint32_t	hash;
	size_t		idx;
	t_list		*check;

	hash = ft_jenkins(key);
	idx = hash % ht->cap;
	if (ht->buckets[idx])
	{
		check = ht->buckets[idx];
		while (check)
		{
			if (len + 1 == check->content_size
					&& ft_strequ(key, check->content))
				return (DUPE);
			check = check->next;
		}
	}
	check = ft_lstnew(key, len + 1);
	if (!check)
		return (MALLOC_ERR);
	ft_lstadd(&ht->buckets[idx], check);
	return (SUCCESS);
}
