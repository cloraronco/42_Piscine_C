/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:45:53 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/22 13:21:20 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	x;
	int	y;

	x = nb;
	y = power;
	if (y == 0)
		return (1);
	else if (y < 0)
		return (0);
	else if (y == 1)
		return (nb);
	else
		return (ft_recursive_power(x, y - 1) * x);
}
