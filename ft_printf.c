
#include "libprintf.h"
#include "libft.h"
int ft_printf(const char *format,...)
{
    int i;
    va_list args;
    va_start(args,format);
    i = 0;
    while(format[i]!= 0)
    {
        if(format[i] == '%')
        {
            i++;
            if(format[i] == 'd' || format[i] == 'i')
            {
                ft_putnbr(va_arg(args,int));
            }
            if(format[i] == 'x' || format[i] == 'X')
                ft_puthex(va_arg(args,int));
            i++;
        }
        else
        {
        ft_putchar_fd(format[i],1);
        i++;
        }
    }
    return 1;
}
int main(int ac ,char **av)
{
    ft_printf(av[1],ft_atoi(av[2]),ft_atoi(av[3]));
        ft_putchar_fd('\n',1);
    printf(av[1],ft_atoi(av[2]),ft_atoi(av[3]));
}