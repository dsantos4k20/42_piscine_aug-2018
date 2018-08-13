/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 09:13:35 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/06 11:08:45 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char ptr)
{
	write(1, &ptr, 1);
}

void ft_putnbr(int ptr)
{
	write(1, &ptr, 1);
}

int		main(void)
{
	int tab[10];
	int tab2[10];
	int *tabptr[2];
	
	tabptr[0] = tab;
	tabptr[1] = tab2;
	tabptr [1][3] = 42;
	ft_putnbr(tab2[3]);
	ft_putchar('\n');
	return (0);
}
