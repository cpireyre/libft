/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_to_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:07:56 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:39:11 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "ctrl.h"
#include "io.h"
#include "str.h"
#include <unistd.h>
#include <stdlib.h>

t_list	*ft_stdin_to_list(void)
{
	t_list		*usr_in;
	char		*l;
	int			ret;

	l = NULL;
	usr_in = NULL;
	while ((ret = ft_gnl(STDIN_FILENO, &l)))
	{
		if (ret == -1)
			ft_exit("Error whilst reading file.", EXIT_FAILURE);
		ft_lstappend(&usr_in, ft_lstnew(l, sizeof(char) * (ft_strlen(l) + 1)));
	}
	return (usr_in);
}
