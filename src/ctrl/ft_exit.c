/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:33:35 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 10:02:58 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_exit(const char *errmsg, int status)
{
	ft_putstr_fd(errmsg, STDERR_FILENO);
	exit(status);
}
