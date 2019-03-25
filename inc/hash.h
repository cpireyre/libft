#ifndef HASH_H
# define HASH_H

# include "fttypes.h"
# include <stddef.h>

size_t		ft_djb(const char *str) __attribute__((pure));
uint32_t	ft_jenkins(const char *key) __attribute__((pure));

# endif
