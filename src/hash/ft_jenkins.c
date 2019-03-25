#include <stdint.h>
#include <stddef.h>

/*
**	This is Bob Jenkins's one-at-a-time hash function.
**	It's better than djb but they're both
**	fine for my purposes.
*/

uint32_t	ft_jenkins(const char *key)
{
	uint32_t	hash;

	hash = 0;
	while (*key)
	{
		hash += *key;
		hash += hash << 10;
		hash ^= hash >> 6;
		key++;
	}
	hash += hash << 3;
	hash ^= hash >> 11;
	hash += hash << 15;
	return (hash);
}
