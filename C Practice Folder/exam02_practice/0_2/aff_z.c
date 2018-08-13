/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 16:11:04 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/08 18:13:27 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int y;

	y = 0;
	if (argc != 2)
	{
		write(1, "z", 1);
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][y] != '\0')
	{
		write(1, "z", 1);
		write(1, "\n", 1);
		return (0);
	}
	if (argv[1][y] == 'z')
	{
		write(1, "z", 1);
		write(1, "\n", 1);
		return (0);
	}
	y++;	
	return (0);
}
