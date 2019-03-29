/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:43:28 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/29 15:50:02 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TSTRING_H
# define TSTRING_H

# include <stddef.h>

# define SUCCESS	0
# define MALLOC_ERR	1
# define READ_ERR	-1

typedef struct	s_str
{
	size_t	length;
	char	*str;
}				t_str;

void	print_str(t_str str);
int		file_to_string(int fd, t_str *buf);

#endif
