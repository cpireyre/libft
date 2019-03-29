/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 13:05:01 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/29 13:05:32 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"
#include "mem.h"

int		hashtable_init(t_ht *ht, size_t initial_cap)
{
	ht->buckets = ft_memalloc(sizeof(t_list*) * initial_cap);
	if (!ht->buckets)
		return (MALLOC_ERR);
	else
	{
		ht->cap = initial_cap;
		ht->elems = 0;
		return (SUCCESS);
	}
}
