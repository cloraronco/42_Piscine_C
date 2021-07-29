/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 20:24:00 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/25 20:36:14 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sizeof_itoa(int nb)
{
	int	i;

	i = 0;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int nb)
{
	int		i;
	int		inb;
	char	*nbr;

	inb = nb;
	i = ft_sizeof_itoa(nb) - 1;
	nbr = NULL;
	nbr = malloc(sizeof(char) * (ft_sizeof_itoa(nb) + 1));
	if (!nbr)
		return (NULL);
	while (nb > 9)
	{
		nbr[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	nbr[i] = nb + '0';
	nbr[ft_sizeof_itoa(inb)] = '\0';
	return (nbr);
}
