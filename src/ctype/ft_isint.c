/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:31:18 by cpireyre          #+#    #+#             */
/*   Updated: 2019/03/20 16:54:14 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "ctype.h"
#include <limits.h>
#include "fttypes.h"

t_bool		ft_isint(const char *arg)
{
	intmax_t	tmp;
	size_t		len;

	len = ft_strsplen(arg);
	if (len > 11)
		return (false);
	tmp = ft_atoi(arg);
	if ((intmax_t)INT_MAX < (intmax_t)tmp || (intmax_t)tmp < (intmax_t)INT_MIN)
		return (false);
	if (*arg == '+' || *arg == '-')
		arg++;
	if (!ft_isdigit(*arg))
		return (false);
	while (*arg && !ft_isspace(*arg))
	{
		if (!ft_isdigit(*arg))
			return (false);
		arg++;
	}
	return (true);
}
