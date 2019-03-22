#include <stdint.h>
#include <stddef.h>

/*
**	This is Bob Jenkins's one-at-a-time hash function.
**	It's better than djb but they're both
**	fine for my purposes.
*/

uint32_t	ft_jenkins(const char *key, size_t length)
{
	uint32_t	hash;

	hash = 0;
	while (length--)
	{
		hash += key[length];
		hash += hash << 10;
		hash ^= hash >> 6;
	}
	hash += hash << 3;
	hash ^= hash >> 11;
	hash += hash << 15;
	return (hash);
}
