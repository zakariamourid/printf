/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:56:49 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/25 14:07:42 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_strlen(const char *s);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_puthex(unsigned int nb, char c);
int	ft_putaddress(unsigned long n);
int	ft_putnbr_unsigned(unsigned int n);
#endif
