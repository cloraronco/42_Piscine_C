/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:47:08 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/22 15:47:13 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	total;
	int	valeur;

	valeur = 1;
	total = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (valeur <= nb)
	{
		total *= valeur;
		valeur++;
	}
	return (total);
}
