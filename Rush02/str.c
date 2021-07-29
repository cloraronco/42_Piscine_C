/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 19:30:51 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/25 20:22:46 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*comp_str(char *dico)
{
	int		size_malloc;
	char	*word;
	int		j;
	int		test;

	size_malloc = 0;
	j = 0;
	while (dico[j] == ' ')
		j++;
	if (dico[j] == ':')
		j++;
	while (dico[j] == ' ')
		j++;
	while (dico[j + size_malloc] != '\n')
		size_malloc++;
	word = malloc((size_malloc + 1) * sizeof(char));
	test = size_malloc;
	size_malloc = 0;
	while (dico[j + size_malloc] != '\n')
	{
		word[size_malloc] = dico[j + size_malloc];
		size_malloc++;
	}
	word[size_malloc] = '\0';
	return (word);
}

char	*ft_strstr(char *to_find, char *dico)
{
	int	i;
	int	j;

	i = 0;
	while (dico[i] != '\0')
	{
		if (dico[i] == to_find[0] && ((i > 0 && dico[i - 1] == '\n')
				|| (i == 0)))
		{
			j = 0;
			while (dico[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
				{
					if (dico[i + j] == ' ' || dico[i + j] == ':')
						return (comp_str(&dico[i + j]));
					while (dico[i + j] != '\n')
						i++;
				}
			}
		}
		i++;
	}
	return ("*.~");
}
