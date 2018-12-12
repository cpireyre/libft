#include "libft.h"

int		ft_tab_avg(int *tab, int size)
{
	int		acc;
	int		idx;

	acc = 0;
	idx = 0;
	while (idx < size)
		acc += tab[idx++];
	return (acc / size);
}
