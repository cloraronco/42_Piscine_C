/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:03:01 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/28 15:33:28 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	repeat_alpha(char str)
{
	int	repeat;

	if (str > 64 && str < 91)
		repeat = str - 'A' + 1;
	else if (str > 96 && str < 123)
		repeat = str - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int ac, char **av)
{
	int	repeat;

	if (ac == 2)
	{
		while (*av[1])
		{
			repeat = repeat_alpha(*av[1]);
			while (repeat--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
