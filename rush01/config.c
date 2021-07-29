/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:52:03 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/18 15:45:55 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_turbo_atoi(char *str);

char	ft_forbidden(char *malloc)
{
	tab[i][j];

	if (tab[i] == tab[j])
		return (0);
}
/*
int		opposit()
{
	if (
}
*/
int		azimut(int i, int **str) //appelle number
{
	while (**str)
	{
		if (col_up(i))
			return (tab[0][i]);
		if (col_down(i))
			return (tab[3][i]);
		if (row_left(i));
			return (tab[i][0]);
		if (row_right(i));
			return (tab[i][3]);
	}
	return (0);
}

int		number(int i, int **str)//Renvoie le nom du coté en fonction de saisie[i]
{
	int		count;

	count = 0;
	i = 0;
	while (**str)
	{
		if (count = 4)
			count = 0;
		if (**str == i)
		{
			return (1)
			str++;
			count++;
		}
	}
	return (0);		
}

int		col_up(int i)
{
	return (number(i, saisie[i] >= 0 && saisie[i] <= 3));
}

int 	col_down(int i)
{
	return (number(i, saisie[i] >= 4 && saisie[i] <=7);
}

int 	row_left(int i)
{
	return (number(i, saisie[i] >= 8 && saisie[i] <=11);
}

int 	row_down(int i)
{
	return (number(i, saisie[i] >= 12 && saisie[i] <=15);
}

void	ft_config(char *ptr)
{
	int		i;
	int		j;
	char	tab;
	int		z;
	
	saisie[i] = turbo_atoi(*ptr);
	tab[i][j];
	i = 0;
	while (tab[i][j] == 0)
	{
		if (saisie[i] == 1)
			azimut(i, **tab) == 4;
		if (saisie[i] == 4)
			azimut(i, **tab) == 1;
/*		while (tab[i] == 0 && tab[j] == 0)
		{
			if (i = 5)
		}
		if (saisie[i] == 2 && 
		if (saisie[i] == 2 && **tab

		if (i+j == 3 && (i != 3 && j != 3))
			tab[z][]*/
		i++;
	}
}
