/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 10:18:50 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:55:03 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "fttypes.h"

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstrev(t_list *head);
t_list			*ft_stdin_to_list(void);
t_list			*ft_lstpluck(t_list *curr, t_list *todel, \
void (*del)(void *, size_t));
t_list			*ft_lstnew(void const *content,  \
size_t sz) __attribute__((malloc));
t_list			*ft_lstmap(t_list *l,  \
t_list *(*f)(t_list *)) __attribute__((malloc));
t_list			*ft_lstlast(t_list *node);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
size_t			ft_lstdepth(t_list *node) __attribute__((pure));
void			ft_lstdelone(t_list **a, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstappend(t_list **node, t_list *new_node);
void			ft_lstadd(t_list **alst, t_list *new);
t_list			*ft_lstsort(t_list *list,  \
int (*compare)(t_list *one, t_list *two));
t_list			*ft_lstrmif(t_list *h,  \
t_bool (*c)(t_list*), void (*d)(void *, size_t));
void			ft_print_node(t_list *node);

#endif
