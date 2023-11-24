#include "ft_printf.h"

static int	get_size(unsigned long n)
{
	int	i;

	i = 1;
	while (n / 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_putnbr_unsigned(unsigned int  n)
{
    int count;
	unsigned long	nb;
	nb = n;
	if(n == 0)
		return (ft_putchar('0'));
	count = get_size(n);
	if (nb < 10)
	{
		nb += 48;
		ft_putchar(nb);
	}
	else
	{
		ft_putnbr_unsigned(nb / 10);
		ft_putnbr_unsigned(nb % 10);
	}
    return (count);
}
// int main()
// {
// 	printf("len == %d ,, res = %u",get_size((unsigned int)2),(unsigned int)2);
// 	printf("len == %d ,, res = %u",ft_putnbr_unsigned((unsigned int)2),(unsigned int)2);
// }