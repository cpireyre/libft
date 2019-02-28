/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:11:27 by cpireyre          #+#    #+#             */
/*   Updated: 2019/02/28 07:43:42 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_options(int argc, char **argv)
{
	int		i;
	long	bits;
	char	*ptr;

	bits = 0;
	i = 1;
	while (i < argc)
	{
		ptr = argv[i];
		if (ft_isoption(ptr))
		{
			ptr++;
			while (*(ptr))
			{
				if (ft_islower((int)*ptr))
					bits = bits | (1 << (*ptr - 'a'));
				else
					bits = bits | (1 << ((*ptr - 'A') + 26));
				ptr++;
			}
		}
		i++;
	}
	return (bits);
}
