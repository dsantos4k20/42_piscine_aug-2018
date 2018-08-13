/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 16:33:19 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/10 16:58:01 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			{
				*argv[1] += 32;
				write(1, argv[1], 1);
			}
			else if (*argv[1] >= 'a' && *argv[1] <= 'z')
			{
				*argv[1] -= 32;
				write(1, argv[1], 1);
			}
			else if (*argv[1] < 'A' && *argv[1] > 'z' && *argv[1] > 'Z' && *argv[1] < 'a' && *argv[1] == ' ')
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
