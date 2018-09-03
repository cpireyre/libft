/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:05:03 by cpireyre          #+#    #+#             */
/*   Updated: 2018/05/13 08:59:26 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t len)
{
	char	*new;

	if (!(new = ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	return (new);
}
