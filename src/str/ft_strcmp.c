/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 08:39:41 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:45:13 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "math.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	return (ft_strncmp(s1, s2, ft_max(ft_strlen(s1), ft_strlen(s2))));
}
