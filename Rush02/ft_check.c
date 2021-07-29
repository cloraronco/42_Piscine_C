/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:50:32 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/25 20:36:24 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_dico(char *tab)
{
	int	i;

	i = 0;
	if (tab[i] == '\0')
		return (0);
	printf("%s", "1");
	while (tab[i] != '\0')
	{
		while (tab[i] != ':')
		{
			printf("%s", "2");
			while (tab[i] >= '0' && tab[i] <= '9')
				i++;
			while (tab[i] == ' ')
				i++;
			if (tab[i - 1] != ' ')
			{
				printf("%d\n", i);
				printf("%s", "\nout1");
				return (0);
			}
			i++;
		}
		printf("%s", "\nOn sort de la premiere boucle\n");
		while (tab[i] != '\n')
		{
			if (tab[i] == ' ' || (tab[i] >= 32 && tab[i] <= 126));
			else
			{
				printf("%s", "\nout2");
				return (0);
			}
			i++;
		}
		i++;
	}
	printf("%s", "\nSortie : ");
	return (1);
}

int	main()
{
  	printf("%d" ,ft_check_dico("0    : zero\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten\n11: eleven\n12: twelve\n13: thirteen\n14: fourteen\n15: fifteen\n16: sixteen\n17: seventeen\n18: eighteen\n19: nineteen\n20: twenty\n30: thirty\n40: forty\n50: fifty\n60: sixty\n70: seventy\n80: eighty\n90: ninety\n100: hundred\n1000: thousand\n1000000: million\n1000000000: billion\n1000000000000: trillion\n1000000000000000: quadrillion\n1000000000000000000: quintillion\n1000000000000000000000: sextillion\n1000000000000000000000000: septillion\n1000000000000000000000000000: octillion\n1000000000000000000000000000000: nonillion\n1000000000000000000000000000000000: decillion\n1000000000000000000000000000000000000: undecillion\n"));
	return (0);
}
