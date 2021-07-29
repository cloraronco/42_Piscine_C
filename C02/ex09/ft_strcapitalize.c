/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:26:16 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/15 10:44:57 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	config1(char *str, int i)
{
	if (str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65))
		return (1);
	return (0);
}

int	config2(char *str, int i)
{
	if ((str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
		return (1);
	return (0);
}

int	config3(char *str, int i)
{
	if (str[i] > 96 && str[i] < 123)
	{
		str[i] = str[i] - 32;
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	i = 0;
	while ((str[i] > 96 && str[i] < 123) || str[i])
	{
		if (config1(str, i) || config2(str, i))
		{
			config3(str, i);
		}
		i++;
	}
	return (str);
}
