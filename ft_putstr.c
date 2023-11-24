#include "ft_printf.h"

int	ft_putstr(char *s)
{
	if(!s)
		return (ft_putstr("(null)"));
	return (write(1, s, ft_strlen(s)));
}