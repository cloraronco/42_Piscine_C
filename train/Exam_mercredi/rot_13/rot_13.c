/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:07:34 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/28 14:37:57 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	rot_13(char str)
{

	if ((str > 64 && str < 78) || (str > 96 && str < 110))
		str += 13;
	else if ((str > 77 && str < 91) || (str > 109 && str < 123))
		str -= 13;
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		while (*av[1])
			ft_putchar(rot_13(*av[1]++));
	write(1, "\n", 1);
	return (0);
}
