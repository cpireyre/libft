/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 13:04:53 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/29 13:04:54 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_H
# define HASH_H

# include <stddef.h>
# include "fttypes.h"
# include "list.h"

# define DUPE			2
# define MALLOC_ERR		1
# define SUCCESS		0

typedef struct	s_ht
{
	size_t	cap;
	size_t	elems;
	t_list	**buckets;
}				t_ht;

int			hashtable_init(t_ht *ht, size_t	initial_cap);
int			hashtable_addelem(t_ht *ht, const char *key, size_t len);
void		hashtable_destroy(t_ht *ht);
size_t		ft_djb(const char *str) __attribute__((pure));
uint32_t	ft_jenkins(const char *key) __attribute__((pure));

# endif
