/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:48:25 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:45:38 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "ctrl.h"

char	*ft_strrev(char *str)
{
	size_t j;
	size_t i;

	i = 0;
	j = ft_strlen(str);
	while (i < j)
	{
		ft_swap(&str[i], &str[j]);
		i++;
		j--;
	}
	return (str);
}
