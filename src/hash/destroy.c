/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 13:05:58 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/29 13:05:59 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

void	hashtable_destroy(t_ht *ht)
{
	size_t	idx;

	idx = 0;
	while (idx < ht->cap)
		if (ht->buckets[idx++])
			ft_lstdel(&ht->buckets[idx], &ft_free_node);
}
