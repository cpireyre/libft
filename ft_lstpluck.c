#include "libft.h"

void	ft_lstpluck(t_list **list, t_list **to_del, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*new_next;

	if (!list || !*list || !to_del || !*to_del)
		return ;
	else if (*list == *to_del)
	{
		tmp = (*list)->next;
		ft_lstdelone(to_del, del);
		*list = tmp;
	}
	else
	{
		new_next = (*to_del)->next;
		tmp = (*list);
		while (*list && (*list)->next != *to_del)
			*list = (*list)->next;
		if (!*list)
			return ;
		ft_lstdelone(to_del, del);
		(*list)->next = new_next;
		*list = tmp;
	}
}
