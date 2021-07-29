/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:48:51 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/29 19:14:44 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_before(char *str, int pos, char c)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (ft_check_before(av[1], i, av[1][i]))
				write(1, &av[1][i], 1);
			i++;
		}
		j = 0;
		while (av[2][j])
		{
			if (ft_check_before(av[1], i, av[2][j]) && (ft_check_before(av[2], j, av[2][j])))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
