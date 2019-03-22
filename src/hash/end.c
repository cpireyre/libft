#include "hash.h"
#include "mem.h"

void	ht_end(t_ht *ht, void (*del)(void*))
{
	del(ht->entries);
}

/*
**	This is the kind of function that can be
**	fed straight away to a destructor if
**	you're storing a very simple struct.
*/

void	simple_free_wrap(t_ht *ht)
{
	ht_end(ht, (void (*)(void *))&ft_free_node);
}

