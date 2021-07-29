/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:23:09 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/11 11:22:14 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	 write(1, &c, 1);
}

void	ft_putnbr(int nb)

{
	int long	res;

	res = nb;
	if (res < 0)
	{
		ft_putchar('-');
		res = res * -1;
	}
	if (res >= 10)
	{
		ft_putnbr(res / 10);
		ft_putnbr(res % 10);
	}
	else
		ft_putchar(res + '0');
}
