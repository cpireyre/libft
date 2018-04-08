/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:30:56 by cpireyre          #+#    #+#             */
/*   Updated: 2018/04/08 09:17:02 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
size_t				ft_strlen(const char *str);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_iswithin(int c, int bgn, int end);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				*ft_memcpy(void *dst, const void *src, size_t n);

#endif
