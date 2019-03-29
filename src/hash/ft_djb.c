/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_djb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 13:05:50 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/29 13:05:52 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_djb(const char *string)
{
	size_t	hash;

	hash = 5381;
	while (*string)
	{
		hash = (hash << 5) + hash + *string;
		string++;
	}
	return (hash);
}
