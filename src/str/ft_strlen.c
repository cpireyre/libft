/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 10:16:24 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:45:24 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *restrict str)
{
	const char	*ptr;
	size_t		i;

	ptr = str;
	i = 0;
	while (1)
	{
		if (!ptr[0])
			return (i);
		else if (!ptr[1])
			return (i + 1);
		else if (!ptr[2])
			return (i + 2);
		else if (!ptr[3])
			return (i + 3);
		ptr += 4;
		i += 4;
	}
}
