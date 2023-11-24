#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
size_t	ft_strlen(const char *s);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_puthex(unsigned int nb, char c);
int	ft_putaddress(unsigned long n);
int	ft_putnbr_unsigned(unsigned int  n);
#endif