/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 13:58:27 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/28 12:45:39 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i])
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int temp;

	j = 0;
	i = 0;
	if (ac == 1)
		return (0);
	while (av[j] != '\0')
		j++;
	while (av[i] < av[j])
	{
		if (ft_strcmp(av[i], av[i + 1])
		while ((av[i] > av[i + 1]) || (av[i] != av[j]))
		{
			temp = av[1][i];
			av[1][i] = av[1][i + 1];
			av[1][i + 1] = temp;
			i++;
		}
		i = 0;
	}
}
