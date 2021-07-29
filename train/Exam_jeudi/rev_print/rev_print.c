/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:14:40 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/29 11:42:31 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int j;
	
	i = 0;
	if (ac == 2)
	{
		j = ft_strlen(av[1]) - 1;
		while (av[1][i])
		{
			write(1, &av[1][j], 1);
			j--;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
