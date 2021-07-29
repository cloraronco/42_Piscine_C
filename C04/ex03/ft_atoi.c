/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:32:03 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/20 10:27:11 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	boucle(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	space(char c)
{
	return (boucle(c, "\t\n\v\f\r "));
}

int	operator(char c)
{
	return (boucle(c, "+-"));
}

int	number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	r;
	int	signe;

	r = 0;
	signe = 1;
	while (space(*str))
		str++;
	while (operator(*str))
	{
		if (*str == '-')
			signe *= -1;
		str++;
	}
	while (number(*str))
	{
		r *= 10;
		r += *str - '0';
		str++;
	}
	return (r * signe);
}
