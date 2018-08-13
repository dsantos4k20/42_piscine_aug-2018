/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 13:37:06 by dsantos           #+#    #+#             */
/*   Updated: 2018/07/29 13:39:59 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	w = x;
	h = y;
	y = 1;
	while (y <= h)
	{
		x = 1;
		while (x <= w)
		{
			if ((x < 2 && y < 2) || (x == w && y == h && y > 1 && x > 1))
				ft_putchar('A');
			else if (x > 1 && x < w && y > 1 && y < h)
				ft_putchar(' ');
			else if ((x == 1 && y == h) || (x == w && y == 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
int 		imain(void)
{
	return(0);
}
int			ft_putchar(char c)
{
		write(1, &c, 1);
		return(0);
}
