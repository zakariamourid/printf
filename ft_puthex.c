/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 02:44:56 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/17 02:48:58 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
static void rev_str(char *s)
{
	int len;
	len = ft_strlen(s);
	while(len--)
	{
		write(1,&s[len],1);
	}
}
int	ft_puthex(unsigned int  nb,char c)
{
	int i;
	char *base;
	long nbr;
	nbr = nb;
	char result[32];
	i = 0;
	base = "0123456789abcdef";
	if(c == 'X')
		base="0123456789ABCDEF";
	while(nbr >= 16)
	{

		result[i++] = base[nbr % 16];
		nbr = nbr / 16;
	}
	result[i++] = base[nbr];
	result[i] = 0;
	rev_str(result);
	return(ft_strlen(result));
}