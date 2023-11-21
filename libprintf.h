#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"
int ft_printf(const char *format,...);
int ft_putnbr(int n);
int ft_puthex(int n,char c);
# endif