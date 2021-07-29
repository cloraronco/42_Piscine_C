/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 13:13:29 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/28 12:44:24 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (0);
	while ((av[1][i] < 48) || (av[1][i] > 57 && av[1][i] < 65) 
			|| (av[1][i] > 90 && av[1][i] < 97) ||  av[1][i] > 122)
		i++;
	while (av[1][i] == 45 || (av[1][i] >= 48 && av[1][i] <= 57) 
			|| (av[1][i] >= 65 && av[1][i] <= 90) 
			|| (av[1][i] >= 97 && av[1][i] <= 122))
	{
		ft_putchar(av[1][i]);
		i++;
	}
}