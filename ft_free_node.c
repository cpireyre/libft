#include "libft.h"
#include <stdlib.h>

void	ft_free_node(void *ptr, size_t size)
{
	ft_bzero(ptr, size);
	free(ptr);
}
