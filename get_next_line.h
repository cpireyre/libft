/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 12:33:30 by cpireyre          #+#    #+#             */
/*   Updated: 2018/11/21 12:16:55 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/syslimits.h>

# define GNL_BUFF	4096
# define SPLIT		'\n'
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int					get_next_line(const int fd, char **line);

#endif
