/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:02:27 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/20 17:11:11 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;
	char			*dst;

	dst = dest;
	i = 0;
	j = 0;
	while (*dst)
		dst++;
	while (i < nb && src[j] != '\0')
	{
		dst[i] = (unsigned char)src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dest);
}
