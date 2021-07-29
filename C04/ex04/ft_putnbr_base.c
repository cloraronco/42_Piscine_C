/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 08:39:00 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/21 10:43:27 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
		i++;
	if (i <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = -1;
	while (base[++i])
	{
		while (base[j] && j != i)
			if (base[j++] == base[i])
				return (0);
		j = 0;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int long	nb;
	int			i;

	i = 0;
	nb = nbr;
	if (ft_error(base) == 1)
	{
		while (base[i])
			i++;
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= i)
		{
			ft_putnbr_base(nb / i, base);
			ft_putnbr_base(nb % i, base);
		}
		else
			ft_putchar(base[nb]);
	}
}
