/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:11:27 by cpireyre          #+#    #+#             */
/*   Updated: 2019/02/20 09:34:11 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_options(int argc, char **argv)
{
	int		i;
	int		bits;

	bits = 0;
	i = 1;
	while (i < argc)
	{
		if (!ft_isoption(argv[i]))
			return (0);
		else
		{
			argv[i]++;
			while (*(argv[i]))
			{
				if (ft_islower((int)*argv[i]))
					bits = bits | (1 << (*argv[i] - 'a'));
				else
					bits = bits | (1 << ((*argv[i] - 'a') + 26));
				argv[i]++;
			}
		}
		i++;
	}
	return (bits);
}
