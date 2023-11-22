#include "libprintf.h"

static int	get_size(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n / 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_putnbr(int n)
{
    int count;
	long	nb;
	nb = n;
    count = get_size(nb);
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
	{
		nb += 48;
		ft_putchar(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
    return (count);
}