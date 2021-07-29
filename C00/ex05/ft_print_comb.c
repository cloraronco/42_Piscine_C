/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:02:04 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/11 11:20:56 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)

{
	write (1, &c, 1);
}

void	ft_print_naruto(char c, char d, char u)

{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
	if (c != '7' || d != '8' || u != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)

{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_print_naruto (c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
