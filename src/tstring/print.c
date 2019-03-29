#include "tstring.h"
#include <unistd.h>

void	print_str(t_str str)
{
	write(1, str.str, str.length);
}
