/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newlibft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:56:47 by cpireyre          #+#    #+#             */
/*   Updated: 2018/12/11 15:08:49 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWLIBFT_H
# define NEWLIBFT_H

# include "inttypes.h"
# include "ft_printf/buf.h"

typedef struct			s_tree
{
	void			*content;
	size_t			content_size;
	struct s_tree	*parent;
	struct s_tree	*sibling;
	struct s_tree	*child;
}						t_tree;

typedef struct			s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}						t_list;

typedef t_list**		t_listarray;

typedef enum			e_bool
{
	false,
	true
}						t_bool;

typedef unsigned char	t_byte;
typedef unsigned int	t_uint;

void					ft_putchar(char c);
void					ft_putstr(char const *str);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putendl(char const *s);
void					ft_putnbr_fd(int n, int fd);
void					ft_putnbr(int n);
void					ft_putnbr_endl(int n);
void					ft_putnstr(const char *str, size_t n);
void					ft_print_bits(t_byte octet);
void					ft_assert(t_bool c, const char *y, const char *n);
void					ft_putchar_unicode(wchar_t uchar);
void					ft_putstr_unicode(wchar_t *ustr);
void					ft_print_int_tab(int *tab, int size);
size_t					ft_strlen(const char *s);
char					*ft_strnew(size_t len);
char					*ft_strncpy(char *dst, const char *src, size_t n);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strdup(const char *str);
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
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
int						ft_strcountif(const char *str, t_bool (*check)(char));
char					*ft_strmapi(char const *s, char (*f)(t_uint, char));
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strstr(const char *h, const char *n);
char					*ft_strnstr(const char *h, const char *n, size_t len);
char					*ft_strncat(char *s1, const char *s2, size_t n);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(const char *str, char c);
int						ft_strclen(const char *str, char c);
size_t					ft_strsplen(const char *str);
char					*ft_strrealloc(char *str, size_t size);
t_bool					ft_isalnum(int c);
t_bool					ft_isalpha(int c);
t_bool					ft_isascii(int c);
t_bool					ft_isdigit(int c);
t_bool					ft_isprint(int c);
t_bool					ft_islower(int c);
t_bool					ft_isupper(int c);
t_bool					ft_isspace(char c);
t_bool					ft_isblank(int c);
t_bool					ft_isdash(char to_check);
t_bool					ft_isoption(const char *arg);
t_bool					ft_isint(const char *arg);
int						ft_min(int a, int b);
int						ft_max(int a, int b);
int						ft_abs(int n);
size_t					ft_magnitude(int n);
int						ft_sqrt(int n);
int						ft_count_digits_base(intmax_t n, int base);
int						ft_count_digits_base_unsigned(uintmax_t n, int base);
void					ft_sort_tab(int *tab, size_t size);
void					ft_quicksort(int *tab, int size);
int						ft_array_min(int *array, int size);
int						ft_tab_avg(int *tab, int size);
int						ft_tolower(int c);
int						ft_toupper(int c);
char					*ft_itoa_base(int n, int base);
int						ft_atoi_base(char *nbr, int base);
intmax_t				ft_atoi(const char *nbr);
char					*ft_itoa(int n);
int						ft_options(int argc, char **argv);
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
void					*ft_realloc(void *ptr, size_t size);
void					ft_swap_int(int *a, int *b);
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **a, void (*del)(void *, size_t));
void					ft_free_node(void *ptr, size_t size);
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstlast(t_list *node);
size_t					ft_lstdepth(t_list *node);
void					ft_lstappend(t_list **node, t_list *addend);
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstpluck(t_list **list, t_list **to_del, void (*del)(void *, size_t));
t_list					*ft_stdin_to_list(void);
int						ft_gnl(const int fd, char **line);
void					ft_exit(const char *errmsg, int status);
int						ft_printf(const char *format, ...);
t_tree					*ft_tree_new(void const *content, size_t content_size);
void					ft_tree_addsibling(t_tree **tree, t_tree *sibling);
void					ft_tree_addchild(t_tree **tree, t_tree *child);
void					ft_tree_free(t_tree **tree);

#endif
