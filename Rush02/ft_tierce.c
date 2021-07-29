/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tierce.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 20:37:38 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/26 12:57:32 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print(int nb, char *dico);
void	ft_print_tierce(char *nb, char *dico);

void	ft_init(char *str, char *dico);

int	ft_first(int count)
{
	return (count % 3);
}

void	ft_tierce2(int count, char *dico)
{
	if (ft_first(count) == 2)
		ft_print_tierce("100", dico);
}

void	ft_tierce(int count, char *dico)
{
	ft_tierce2(count, dico);
	if (count == 3)
		ft_print_tierce("1000", dico);
	if (count == 6)
		ft_print_tierce("1000000", dico);
	if (count == 9)
		ft_print_tierce("1000000000", dico);
	if (count == 12)
		ft_print_tierce("1000000000000", dico);
	if (count == 15)
		ft_print_tierce("1000000000000000", dico);
	if (count == 18)
		ft_print_tierce("1000000000000000000", dico);
	if (count == 21)
		ft_print_tierce("1000000000000000000000", dico);
	if (count == 24)
		ft_print_tierce("1000000000000000000000000", dico);
	if (count == 27)
		ft_print_tierce("1000000000000000000000000000", dico);
	if (count == 30)
		ft_print_tierce("1000000000000000000000000000000", dico);
	if (count == 33)
		ft_print_tierce("1000000000000000000000000000000000", dico);
	if (count == 36)
		ft_print_tierce("1000000000000000000000000000000000000", dico);
}
