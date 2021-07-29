/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 16:56:31 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/27 19:23:57 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_error_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
		i++;
	if (i <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = -1;
	while (base[++i])
	{
		while (base[j] && j != i)
			if (base[j++] == base[i])
				return (0);
		j = 0;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int long	nb;
	int			i;

	i = 0;
	nb = nbr;
	if (ft_error_base(base) == 1)
	{
		while (base[i])
			i++;
		if (nb >= i)
		{
			ft_putnbr_base(nb / i, base);
			ft_putnbr_base(nb % i, base);
		}
		else
			ft_putchar(base[nb]);
	}
}

int	ft_index(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int long	nb;
	int			result;
	int			signe;
	int			i;

	nb = 0;
	i = 0;
	result = 0;
	signe = 1;
	if (ft_error_base(base) == 0)
		return (0);
	while (base[nb])
		nb++;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (ft_index(str[i], base) > (-1))
		result = nb * result + ft_index(str[i++], base);
	return (result * signe);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *ptr;

	ptr = malloc(sizeof(*ptr) * (nbr * base_to) + 1);
	ptr = ft_putnbr_base(ft_atoi_base(nbr, base_from, base_to);
	return (ptr);

}

int main ()
{
	char basefrom[] = "0123456789";
	char baseto[] = "01";
	char nbr[] = "12345";

	printf("%s\n", ft_convert_base(nbr, basefrom, baseto));
}
