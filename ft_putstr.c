#include "libprintf.h"

int	ft_putstr(char *s)
{
	return (write(1, s, strlen(s)));
}