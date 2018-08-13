/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 11:37:49 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/12 14:01:48 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// its wrong does not run
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac,char  **av)
{
	int i;

	i = 0;
	if ((av[2][1] != '\0') || (av[3][1] != '\0') || (av[2][0] < 'A') || (av[2][0] > 'Z') || (av[2][0] < 'a') || (av[2][0] > 'z') || (av[3][0] < 'A') || (av[3][0] > 'Z') || (av[3][0] < 'a') || (av[3][0] > 'z'))
	{
		ft_putchar('\n');
			return (0);
	}
	if (ac == 4)
	{
		while (av[1][i] !='\0')
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			ft_putchar(av[1][i]);
			i++;
			return (0);
		}
	if (av[2][0] != av[1][i])
		ft_putchar(av[1][i]);
	if (ac > 4)
			return (0);
	}
	return (0);
}
