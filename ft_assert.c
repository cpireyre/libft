/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 09:47:58 by cpireyre          #+#    #+#             */
/*   Updated: 2018/06/13 09:48:24 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_assert(t_bool condition)
{
	if (condition == true)
		ft_putstr("\x1b[32m[OK]");
	else
		ft_putstr("\x1b[31m[error]");
}
