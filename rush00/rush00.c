/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 17:18:17 by dsantos           #+#    #+#             */
/*   Updated: 2018/07/28 23:24:06 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int x_pos;
	int y_pos;

	ft_putchar('A');
	x_pos = 0;

	while (x_pos < x-2)
	{
		ft_putchar('B');
		x_pos = x_pos + 1;
	}
	ft_putchar('C');
	ft_putchar('\n');

	y_pos = 0;
	while (y_pos < y-2)
	{
		ft_putchar('B');
		x_pos = 0;
	
		while (x_pos < x-2)
		{
			ft_putchar(' ');
			x_pos = x_pos +1;
	
		}
		ft_putchar('B');
		ft_putchar('\n');

		y_pos = y_pos +1;
	}

	ft_putchar('C');
	x_pos = 0;
	while (x_pos < x-2)
	{
		ft_putchar('B');
		x_pos = x_pos +1;
	}
	ft_putchar('A');
	ft_putchar('\n');

}


int		main(void)
{
	rush(4, 4);
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
