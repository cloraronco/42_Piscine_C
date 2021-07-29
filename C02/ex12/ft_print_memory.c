/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:15:09 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/24 14:02:53 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthexa(unsigned long int nb)
{
	char	*basehex;

	basehex = "0123456789abcdef";
	ft_putchar(basehex[nb / 16]);
	ft_putchar(basehex[nb % 16]);
}

void	ft_printchar(unsigned char *addr, unsigned int compteur)
{
	unsigned int	i;

	i = 0;
	while (i < 16 && addr[i + compteur])
	{
		if (addr[i + compteur] < 32 || addr[i + compteur] > 126)
		{
			ft_putchar(46);
			i++;
		}
		else
		{
			ft_putchar(addr[i + compteur]);
			i++;
		}
	}
	ft_putchar('\n');
}

void	ft_printhexa(unsigned char *addr, unsigned int compteur)
{
	unsigned int		i;

	i = 0;
	while (i < 16 && addr[i + compteur])
	{	
		ft_puthexa(addr[i + compteur]);
		i++;
		if (i % 2 == 0)
			ft_putchar(32);
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		i++;
		if (i % 2 == 0)
			ft_putchar(32);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;

	if (size < 1)
		ft_putchar('\0');
	i = 0;
	while (i < size)
	{
		b = 8;
		while (b-- > 0)
			ft_puthexa((unsigned long int)(addr + i) >> b * 8 & 0xff);
		write(1, ": ", 2);
		if (i % 16 == 0)
			ft_printhexa((unsigned char *)addr, i);
		if (i % 16 == 0)
			ft_printchar((unsigned char *)addr, i);
		i += 16;
	}
	return (addr);
}
