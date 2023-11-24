#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "libft/libft.h" 

int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_puthex(unsigned int nb, char c);
int	ft_putaddress(unsigned long n);
int	ft_putnbr_unsigned(unsigned int  n);
#endif