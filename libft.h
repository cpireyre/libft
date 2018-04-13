/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newlibft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 09:45:32 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/13 09:45:36 by cpireyre         ###   ########.fr       */
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
void					ft_putnbr(int n);
size_t					ft_strlen(const char *s);
char					*ft_strnew(size_t len);
char					*ft_strncpy(char *dst, const char *src, size_t n);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strdup(char *str);
void					ft_striter(char *s, void (*f)(char *));
char					*ft_strmap(char const *s, char (*f)(char));
void					ft_strclr(char *s);
void					ft_strdel(char **ap);
char					*ft_strsub(char const *s, unsigned int o, size_t len);
char					*ft_strchr(const char *s, int c);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strrev(char *str);
char					*ft_strrchr(const char *s, int c);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
int						ft_strequ(char const *s1, char const *s2);
t_bool					ft_isalnum(int c);
t_bool					ft_isalpha(int c);
t_bool					ft_isascii(int c);
t_bool					ft_isdigit(int c);
t_bool					ft_isprint(int c);
t_bool					ft_islower(int c);
t_bool					ft_isupper(int c);
t_bool					ft_isspace(char c);
t_bool					ft_iswithin(int c, int a, int b);
int						ft_min(int a, int b);
int						ft_max(int a, int b);
int						ft_abs(int n);
size_t					ft_magnitude(int n);
int						ft_tolower(int c);
int						ft_toupper(int c);
char					*ft_itoa(int n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					ft_memdel(void **ap);
void					*ft_memset(void *b, int c, size_t len);
void					*ft_memalloc(size_t size);
void					ft_bzero(void *s, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memccpy(void *d, const void *s, int c, size_t n);
void					*ft_memmove(void *d, const void *s, size_t len);
void					*ft_memchr(const void *s, int c, size_t n);
void					ft_swap(char *a, char *b);
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
