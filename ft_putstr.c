#include "libprintf.h"

int	ft_putstr(char *s)
{
	if(!s)
		return (ft_putstr("(NULL)"));
	return (write(1, s, ft_strlen(s)));
}