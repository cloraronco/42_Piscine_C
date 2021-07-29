/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:32:03 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/18 16:21:09 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_turbo_atoi(char *str)
{
	int i;

	i = 0;
	while (str[i + 6])
	{
		str[i] = str[i] - '0';
		printf("%d", str[i]);
		i += 2;
	}
	return (0);
}

int main(void)
{
    char str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";	

    ft_turbo_atoi(str);
	return (0);
}
