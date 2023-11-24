
#include "libprintf.h"
#include "libft/libft.h"

static void check_format(const char *format,va_list args,int *count,int i)
{
	if(format[i] == 'c')
		*count += ft_putchar(va_arg(args,int));
	if(format[i] == 's')
		*count += ft_putstr(va_arg(args,char *));
	if(format[i] == 'p')
		*count += ft_putaddress(va_arg(args, unsigned long));
	if (format[i] == 'd' || format[i] == 'i')
		*count += ft_putnbr(va_arg(args, int));
	if (format[i] == 'u')
		*count += ft_putnbr_unsigned(va_arg(args,unsigned int));
	if (format[i] == 'x' || format[i] == 'X')
		*count += ft_puthex(va_arg(args, unsigned long), format[i]);
	if (format[i] == '%')
		*count += ft_putchar('%');
	i++;
}

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
			check_format(format,args,&count,i);
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
