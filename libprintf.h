#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "libft/libft.h" 

int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_puthex(unsigned long long n, char c);
#endif