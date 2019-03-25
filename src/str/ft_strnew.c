/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:05:03 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:43:12 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

char	*ft_strnew(size_t len)
{
	char	*new;

	new = ft_memalloc(sizeof(char) * (len + 1));
	return (new);
}