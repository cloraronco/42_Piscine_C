/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrush03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 09:31:51 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/10 15:47:22 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	config(int x, int y, int xi, int yi)

{
	if ((xi == 1 && yi == 1) || (xi == 1 &&  yi == y))
	{
		ft_putchar('A');
	}
	else if ((xi == x && yi == 1) || (xi == x &&  yi == y))
	{
		ft_putchar('C');
	}
	else if (xi == 1 || yi == 1 || xi == x ||  yi == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		xi;
	int		yi;

	xi = 1;
	yi = 1;
	while (yi <= y)
	{
		xi = 1;
		while (xi <= x)
		{
			config(x, y, xi, yi);
			xi++;
		}
		ft_putchar('\n');
		yi++;
	}
}

int		main()
{
	rush(5, 1);
	return (0);
}
