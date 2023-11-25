/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <zmourid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:54:35 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/25 15:16:59 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

static void	check_format(const char *format, va_list *args, int *count, int i)
{
	if (ft_strchr("cspdiuxX%", format[i]))
	{
		if (format[i] == 'c')
			*count += ft_putchar(va_arg(*args, int));
		if (format[i] == 's')
			*count += ft_putstr(va_arg(*args, char *));
		if (format[i] == 'p')
			*count += ft_putaddress(va_arg(*args, unsigned long));
		if (format[i] == 'd' || format[i] == 'i')
			*count += ft_putnbr(va_arg(*args, int));
		if (format[i] == 'u')
			*count += ft_putnbr_unsigned(va_arg(*args, unsigned int));
		if (format[i] == 'x' || format[i] == 'X')
			*count += ft_puthex(va_arg(*args, unsigned int), format[i]);
		if (format[i] == '%')
			*count += ft_putchar('%');
	}
	else
	{
		*count += ft_putchar(format[i]);
	}
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
			if (format[i] != 0)
			{
				check_format(format, &args, &count, i);
				i++;
			}
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	return (count);
}
