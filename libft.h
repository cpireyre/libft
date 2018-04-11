/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newlibft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 14:50:46 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/11 14:50:48 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWLIBFT_H
# define NEWLIBFT_H

# include <string.h>

typedef struct			s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}						t_list;

typedef enum			e_bool
{
	false,
	true
}						t_bool;

typedef unsigned char	t_byte;

void					ft_putchar(char c);
void					ft_putstr(char *str);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putendl(char const *s);
void					ft_putnbr_fd(int n, int fd);
size_t					ft_strlen(const char *s);
t_bool					ft_isalnum(int c);
t_bool					ft_isalpha(int c);
t_bool					ft_isascii(int c);
t_bool					ft_isdigit(int c);
t_bool					ft_isprint(int c);
t_bool					ft_islower(int c);
t_bool					ft_isupper(int c);
t_bool					ft_iswithin(int c, int a, int b);
int						ft_min(int a, int b);
int						ft_max(int a, int b);
int						ft_tolower(int c);
int						ft_toupper(int c);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					ft_memdel(void **ap);
void					*ft_memset(void *b, int c, size_t len);
void					*ft_memalloc(size_t size);
void					ft_bzero(void *s, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memccpy(void *d, const void *s, int c, size_t n);
void					*ft_memmove(void *d, const void *s, size_t len);
void					*ft_memchr(const void *s, int c, size_t n);
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **a, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstlast(t_list *node);
size_t					ft_lstdepth(t_list *node);
void					ft_lstappend(t_list **node, t_list *addend);
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));

#endif
