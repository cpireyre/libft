#include "libft.h"

static t_bool	partition_is_sorted(int *tab, int left, int right)
{
	while (left < right)
	{
		if (tab[left] > tab[left + 1])
			return (false);
		left++;
	}
	return (true);
}

static void	sort_partitions(int *tab, int left, int right)
{
	int	i;
	int	j;
	int	pivot;

	if (left < 0 || right < 0 || partition_is_sorted(tab, left, right))
		return ;
	pivot = tab[left];
	i = left;
	j = right;
	pivot = tab[left];
	while (i < j)
	{
		while (tab[j] > pivot)
			j--;
		while (tab[i] < pivot)
			i++;
		if (i < j)
		{
			ft_swap_int(&tab[j], &tab[i]);
			i++;
			j--;
		}
	}
	sort_partitions(tab, left, i - 1);
	sort_partitions(tab, j + 1, right);
}
			

void	ft_quicksort(int *tab, size_t size)
{
	sort_partitions(tab, 0, size - 1);
}
