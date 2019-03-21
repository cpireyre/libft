/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 12:33:30 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 10:13:32 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# if defined(__APPLE__) && defined(__MACH__)
#  include <sys/syslimits.h>
# else
#  define OPEN_MAX 10240
# endif

# define GNL_BUFF	4096
# define SPLIT		'\n'

#endif
