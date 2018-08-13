/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 11:48:51 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/09 20:03:27 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		repeat_alpha(char c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	else
		i = 1;
	return (i);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		while (*argv[1])
		{
			i = repeat_alpha(*argv[1]);
			while (i > 0)
			{
				write(1, argv[1], 1);
				i--;
			}
			argv[1]++;
		}
	}
	ft_putchar('\n');
}
