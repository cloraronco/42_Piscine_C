/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   absent.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:16:13 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/18 22:56:15 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	no_line(int k, int **tab, int i) //k=valeur cherchée,1 si pas sur la ligne
{
	i = 0;
	while (i < 4)
	{
		if (tab[i][j] == k)
			return (0);
		i++;
		return (1);
	}
}

int	no_col(int k, int **tab, int j)
{
	j = 0;
	while (j < 4)
	{
		if (tab[i][j] == k)
			return (0);
		j++;
		return (1);
	}
}

int	boucle()
{
	while (j < 4)
	{
		while (i < 4)
		{
			if (tab[i][j] == 0)
			{
				
			}
			i++;
		}
		i = 0;
		j++;
	}
}

//si nbr de caracteres differents de 4

int	diff()
{
	
}

//et si nbr est compatible avec la vue

int	review(int **tab, int i, int j)
{
	int	n; // 1 ou 2 ou 3 ou 4

	n = 0;
	while (n++ <= 4)
	{
		tab[i][j] = n;
		if (no_line(n, **tab, j) && no_col(n, **tab, i))
		{
			if (i == 4 && j == 4)
				return (1);
			else if (i < 4)
			{
				if (review(tab, i + 1, j))
					return (1);
			}
			else if (j < size)
			{
				if (review(tab, 1, j + 1))
					return (1);
			}
			tab[i][j] = 0;
		}
	}
	tab[i][j] = 0;
	return (0);
}
