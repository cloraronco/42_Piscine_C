/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:04:28 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/25 20:40:58 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print(int nb, char *dico);
void	ft_print_tierce(char *nb, char *dico);
char	*comp_str(char *dico);
char	*ft_strstr(char *to_find, char *dico);

int	ftt_first(int count)
{
	return (count % 3);
}

void	ft_ttierce2(int count, char *dico)
{
	if (ft_first(count) == 2)
		ft_print_tierce("100", dico);
}

void	ft_ttierce(int count, char *dico)
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

void	ftt_init(char *str, char *dico)
{
	int	count;
	int	i;
	int	isPrint;

	isPrint = 0;
	i = 0;
	count = 0;
	while (str[count + 1] != '\0')
		count++;
	while (str[i])
	{
		isPrint = 0;
		if (ft_first(count - i) == 0)
			if (str[i] != '0')
				ft_print(((int)str[i] - '0'), dico);
		if (ft_first(count - i) == 1)
		{
			if (str[i] == '1')
			{
				ft_print(((((int)str[i] - '0') * 10)
						+ ((int)str[1 + i] - '0')), dico);
				isPrint = 1;
				i++;
			}
			else if (str[i] != '0')
			{
				ft_print(((((int)str[i] - '0') * 10)), dico);
				if (str[i + 1] == '0')
					ft_tierce(count - (i + 1), dico);
			}
			if (str[i] != '0')
				ft_tierce(count - i, dico);
		}
		if (ft_first(count - i) == 2)
			if (str[i] != '0')
				ft_print((int)str[i] - '0', dico);
		if (str[i] != '0' || (str[i] != '0' && i != count))
			write(1, " ", 1);
		if (str[i] != '0')
		{
			if (isPrint != 1)
			{
				ft_tierce(count - i, dico);
				write(1, " ", 1);
			}
		}
		i++;
	}
}
