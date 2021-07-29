/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:51:29 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/21 18:48:37 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_error_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
		i++;
	if (i <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = -1;
	while (base[++i])
	{
		while (base[j] && j != i)
			if (base[j++] == base[i])
				return (0);
		j = 0;
	}
	return (1);
}

int	ft_index(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int long	nb;
	int			result;
	int			signe;
	int			i;

	nb = 0;
	i = 0;
	result = 0;
	signe = 1;
	if (ft_error_base(base) == 0)
		return (0);
	while (base[nb])
		nb++;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (ft_index(str[i], base) > (-1))
		result = nb * result + ft_index(str[i++], base);
	return (result * signe);
}
