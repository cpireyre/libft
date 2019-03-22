/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 10:44:13 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:27:29 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include "attributes.h"
# include "fttypes.h"

int			ft_atoi_base(char *nbr, int base) __attribute__((pure));
intmax_t	ft_atoi(const char *nbr) __attribute__((pure));

void		ft_strdel(char **ap);
char		*ft_itoa_base(int n, int base) __attribute__((MALLOC_CONST));
char		*ft_itoa(int n) __attribute__((MALLOC_CONST));
char		*ft_strmap(char const *s, char (*f)(char)) __attribute__((malloc));
char		*ft_strnew(size_t l) __attribute__((MALLOC_CONST));
char		*ft_strdup(const char *str) __attribute__((malloc));
char		*ft_strjoin(char const *s1, \
char const *s2) __attribute__((malloc));
char		*ft_strrealloc(char *str, size_t size) __attribute__((malloc));
char		**ft_strsplit(const char *str, char c) __attribute__((malloc));
char		*ft_strsub(char const *s, unsigned int o, \
size_t len) __attribute__((malloc));
char		*ft_strtrim(char const *s) __attribute__((malloc));

size_t		ft_strsplen(const char *str) __attribute__((pure));
size_t		ft_strlen(const char *s) __attribute__((pure));
int			ft_strcmp(const char *s1, \
const char *s2) __attribute__((pure));
int			ft_strncmp(const char *s1, \
const char *s2, size_t n) __attribute__((pure));
int			ft_strclen(const char *str, char c) __attribute__((pure));
char		*ft_strchr(const char *s, int c) __attribute__((pure));
char		*ft_strrchr(const char *s, int c) __attribute__((pure));
int			ft_strequ(char const *s1, \
char const *s2) __attribute__((pure));
int			ft_strnequ(char const *s1, \
char const *s2, size_t n) __attribute__((pure));
char		*ft_strstr(const char *h, const char *n);
char		*ft_strnstr(const char *h, const char *n, size_t len);
int			ft_strcountif(const char *s, t_bool (*c)(char));

size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strncat(char *s1, const char *s2, size_t n);
void		ft_strclr(char *s);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_striter(char *s, void (*f)(char *));
char		*ft_strcat(char *b, const char *a);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t n);
char		*ft_strrev(char *str);

#endif
