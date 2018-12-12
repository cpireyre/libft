#include "libft.h"

void	ft_lstpluck(t_list **list, t_list **to_del, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*save;

	if (!to_del || !list || !*to_del || !*list)
		return ;
	tmp = *list;
	if (*list == *to_del)
		save = (*list)->next;
	else
		save = *list;
	while (tmp->next && tmp->next != *to_del)
		tmp = tmp->next;
	*list = tmp;
	if (tmp->next)
		tmp = (*list)->next->next;
	else
		tmp = NULL;
	ft_lstdelone(to_del, del);
	(*list)->next = tmp;
	*list = save;
}
