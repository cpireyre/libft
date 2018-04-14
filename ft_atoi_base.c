#include "libft.h"

static int		checkbase(char c)
{
	char	*base;
	size_t	i;

	i = 0;
	base = "0123456789ABCDEF";
	while (c != base[i] && base[i])
		i++;
	return (base[i] ? i : 0);
}

int				ft_atoi_base(char *nbr, int base)
{
	int		sum;
	char	*basestr;
	int		sign;

	sum = 0;
	sign = 1;
	basestr = "0123456789ABCDEF";
	while (ft_isspace(*nbr))
		nbr++;
	if (*nbr == '-' || *nbr == '+')
	{
		nbr++;
		sign = -1;
	}
	while (ft_isdigit(*nbr) || ft_isupper(*nbr))
	{
		sum *= base;
		sum += checkbase(*nbr);
		nbr++;
	}
	return (sum * sign);
}
