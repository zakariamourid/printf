#include "libprintf.h"


int ft_putchar(char c)
{
    ft_putchar_fd(c,1);
    return (1);
}
int	ft_putnbr(int n)
{
    int count;
	long	nb;
	nb = n;
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
    count = 1;
    return count;
}
int ft_puthex(int n)
{
    char *hex;
    long nbr;
    nbr = n;
    hex = "0123456789abcdef";
    if(nbr < 0)
    {
        nbr = -nbr;
        ft_putchar('-');
    }
    if(nbr < 16)
    {
        ft_putchar(hex[nbr]);
    }
    else
    {
        ft_puthex(nbr / 16);
        ft_puthex(nbr % 16);
    }
}
