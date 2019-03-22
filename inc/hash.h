#ifndef HASH_H
# define HASH_H

# include "fttypes.h"
# include <stddef.h>

typedef struct	s_ht
{
	size_t	size;
	size_t	elems;
	size_t	content_size;
	void	(*hash)(void *);
	void	*entries;
}				t_ht;

t_bool		ht_init(t_ht *ht, size_t initial_sz, \
		size_t content_size, void (*hash_func)(void*)) __attribute__((nonnull));
size_t		ft_djb(const char *str) __attribute__((pure));
uint32_t	ft_jenkins(const char *key, size_t length);

void		ht_end(t_ht *ht, void (*del)(void *));
void		simple_free_wrap(t_ht *ht);

# endif
