
#include "libft.h"
#include "libprintf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	args;

	count = 0;
	va_start(args, format);
	i = 0;
	while (format[i] != 0)
	{
		if (format[i] == '%')
		{
			i++;
            if(format[i] == 'c')
                count += ft_putchar(va_arg(args,int));
            if(format[i] == 's')
                count += ft_putstr(va_arg(args,char *));
			if (format[i] == 'd' || format[i] == 'i')
			{
				count += ft_putnbr(va_arg(args, int));
			}
			if (format[i] == 'x' || format[i] == 'X')
				count += ft_puthex(va_arg(args, int), format[i]);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			count++;
			i++;
		}
	}
	return (count);
}
int	main(int ac, char **av)
{
	int count = ft_printf(av[1], ft_atoi(av[2]),av[3]);
	printf("\n");
	int count2 = printf(av[1], ft_atoi(av[2]),av[3]);
	printf("dyali == %d \n", count);
	printf("dyalhom == %d \n", count2);
}