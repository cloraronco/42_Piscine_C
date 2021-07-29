/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:47:42 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/29 19:36:36 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_fill(char **strs, char *sep, char *dest, int size)

{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	while (i < size)
	{
		count = 0;
		while (strs[i][count])
		{
			dest[j] = strs[i][count++];
			j++;
		}
		count = 0;
		while ((i < size - 1) && (sep[count] != '\0'))
		{
			dest[j] = sep[count++];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_count_letter(int size, char **strs, char *sep)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (i < size)
	{
		r = r + ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	if (size > 2)
	{
		while (i < size - 1)
		{
			r = r + ft_strlen(sep);
			i++;
		}
	}
	return (r + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		mall_size;
	char	*dest;
	char	*ptr_null;

	if (size == 0)
	{
		ptr_null = malloc(1 * sizeof(char));
		ptr_null = "\0";
		return (ptr_null);
	}
	mall_size = ft_count_letter(size, strs, sep);
	dest = malloc(mall_size * sizeof(char));
	if (dest == NULL)
		return (0);
	dest = ft_fill(strs, sep, dest, size);
	return (dest);
}
