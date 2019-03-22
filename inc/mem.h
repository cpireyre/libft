/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 10:36:29 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:27:29 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include "attributes.h"
# include "fttypes.h"

void	*ft_memalloc(size_t size) __attribute__((malloc));
void	*ft_realloc(void *p, size_t sz)__attribute__((malloc));

void	*ft_memchr(const void *s, int c, size_t n) __attribute__((pure));
int		ft_memcmp(const void *a, const void *b, size_t n) __attribute__((pure));

void	*ft_memccpy(void *d, const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n) __attribute((nonnull));
void	*ft_memmove(void *d, const void *s, size_t len) __attribute((nonnull));

void	*ft_memset(void *b, int c, size_t len) __attribute((nonnull));
void	ft_bzero(void *s, size_t n) __attribute((nonnull));
void	ft_memdel(void **ap);
void	ft_free_node(void *ptr, size_t size);
#endif
