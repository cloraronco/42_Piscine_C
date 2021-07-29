/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_print_memory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:06:43 by clora-ro          #+#    #+#             */
/*   Updated: 2021/07/14 15:05:25 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char *str = "coucou je suis print meme et je te suce le cerveau jusqu'a ta mort CEREBRALE					uihj	mio	120						nque \r \t \f \v \f  \e \r \xef \xef \xef \xef \xef \xef \xef \xef \xef \xef \xef \xef \xef \xef \xef";
	ft_print_memory(str, 150);
}
