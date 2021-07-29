/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:37:05 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/15 10:37:40 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	compteur;

	i = 0;
	compteur = 0;
	while (src[compteur])
		compteur++;
	if (size == 0)
		return (compteur);
	while (i < size - 1 && src[i])
	{		
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (compteur);
}
