/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:47:42 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/29 10:33:21 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	ft_len_malloc(int size, char **strs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		i++;
	}
	return (j);
}

char	ft_null(char *ptr)
{
	ptr = malloc(sizeof(*ptr) + 1);
	ptr = "\0";
	return (*ptr);
}

char	*ft_join(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (count < size)
	{
		i = 0;
		while (strs[count][i] != '\0')
		{
			dest[j] = strs[count][i];
			i++;
			j++;
		}
		i = 0;
		while ((count < size - 1) && (sep[i] != '\0'))
		{
			dest[j] = sep[i++];
			j++;
		}
		count++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	char	*dest;

	dest = 0;
	if (size == 0)
		ft_null(dest);
	j = ft_len_malloc(size, strs);
	dest = malloc(sizeof(*dest) * (j + (ft_strlen(sep - 1) * size)) + 1);
	dest = ft_join(size, strs, sep, dest);
	return (dest);
}
