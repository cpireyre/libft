/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:29:34 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 10:15:38 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "math.h"
#include <unistd.h>

void	ft_putnstr(const char *str, size_t n)
{
	size_t	i;

	i = ft_min(ft_strlen(str), n);
	write(1, str, i);
}
