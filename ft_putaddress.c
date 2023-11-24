#include "libprintf.h"

static void  rev_str(char *s)
{
	int len;
	len = ft_strlen(s);
	while(len--)
	{
		write(1,&s[len],1);
	}
}
int	ft_putaddress(unsigned long n)
{
	int i;
	int count;
	char *base;
	char result[100];
	i = 0;
	count = 0;
	base = "0123456789abcdef";
    if (!n)
        return(ft_putstr("0x0"));
    while(n > 16)
	{
		result[i++] = base[n % 16];
		n = n / 16;
	}
	result[i++] = base[n];
	result[i] = 0;
    count+= ft_putstr("0x") + ft_strlen(result);
	rev_str(result);
	return(count);
}