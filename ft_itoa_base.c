#include <stdlib.h>
#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	size_t	digits;
	long	nbr;
	char	*str;
	char	*basestr;
	t_bool	sign;

	if (!ft_iswithin(base, 2, 16))
		return (NULL);
	sign = (n < 0 && base == 10) ? 1 : 0;
	basestr = "0123456789ABCDEF";
	digits = sign + 1;
	nbr = (long)n * (n < 0 ? -1 : 1);
	while (n /= base)
		digits++;
	if (!(str = ft_strnew(digits)))
		return(NULL);
	if (sign)
		str[0] = '-';
	while (digits-- - sign)
	{
		str[digits] = basestr[(nbr % base)];
		nbr /= base;
	}
	return (str);
}
