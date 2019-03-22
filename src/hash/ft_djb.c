#include <stddef.h>

size_t		ft_djb(const char *string)
{
	size_t	hash;

	hash = 5381;
	while (*string)
	{
		hash = (hash << 5) + hash + *string;
		string++;
	}
	return (hash);
}
