/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:43:13 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/29 13:37:01 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ft_strlen(av[2]) > 1 || ft_strlen(av[3]) < 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ac == 4)
	{
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
