#include "hash.h"
#include "mem.h"

t_bool	ht_init(t_ht *t, size_t initial_sz, \
		size_t content_size, void (*hash_func)(void*))
{
	t->size = initial_sz;
	t->elems = 0;
	t->content_size = content_size;
	t->hash = hash_func;
	t->entries = ft_memalloc(initial_sz * content_size);
	if (!t->entries)
		return (false);
	else
		return (true);
}
