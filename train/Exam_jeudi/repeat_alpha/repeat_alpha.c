/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 10:35:11 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/29 11:03:45 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_repeat_alpha(char c)
{
	int	repeat;

	repeat = 0;
	if (c >= 'A' && c <= 'Z')
		repeat = c - 65 + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 97 + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int ac, char **av)
{
	int repeat;
	int	i;

	i = 0;
	repeat = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			repeat = ft_repeat_alpha(av[1][i]);
			while (repeat)
			{
				ft_putchar(av[1][i]);
				repeat--;
			}
			i++;
		}
	}
	return (0);
}
