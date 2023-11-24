#include "libprintf.h"

int	ft_putstr(char *s)
{
	if(!s)
		return (ft_putstr("0x0"));
	return (write(1, s, ft_strlen(s)));
}