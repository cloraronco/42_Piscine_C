/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:24:25 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/29 19:39:58 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strndup(char *src, int n, int pos)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(n + 1);
	if (!dest)
		return (NULL);
	while (src[pos] && i < n)
	{
		dest[i] = src[pos];
		i++;
		pos++;
	}
	dest[i] = 0;
	return (dest);
}

char	ft_check_charset(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_count_line(char *str, char *charset)
{
	int	i;
	int	count;
	int	j;

	j = 0;
	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_check_charset(str[i], charset) == 1 && str[i])
		{
			j = 0;
			i++;
		}
		while (ft_check_charset(str[i], charset) == 0 && str[i])
		{
			i++;
			j++;
		}
		if (j > 0)
			count++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		count;
	char	**dest;

	i = 0;
	count = 0;
	dest = malloc(sizeof(char *) * (ft_count_line(str, charset) + 1));
	while (str[i])
	{
		while (ft_check_charset(str[i], charset) == 1 && str[i])
			i++;
		j = 0;
		while (ft_check_charset(str[i], charset) == 0 && str[i])
		{
			i++;
			j++;
		}
		if (j > 0)
			dest[count++] = ft_strndup(str, j, (i - j));
	}
	dest[count] = 0;
	return (dest);
}
