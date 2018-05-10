/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:29:34 by cpireyre          #+#    #+#             */
/*   Updated: 2018/05/06 11:38:05 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(const char *str, size_t n)
{
	size_t	i;
	
	i = 0;
	if (!str)
		return ;
	while (i < n)
		ft_putchar(str[i++]);
}
