/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:31:51 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/08 14:40:13 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a program that takes a string, and displays the first 'a' character it
//encounters in it, followed by a newline. If there are no 'a' characters in the
//string, the program just writes a newline. If the number of parameters is not
//1, the program displays 'a' followed by a newline.

#include <unistd.h>

int		main(int argc, char **argv)
{
	int y;

	y = 0;
	if (argc != 2) 
	{
		write(1, "a", 1);
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][y] != '\0')
	{
		if (argv[1][y] == 'a') 
		{
			write(1, "a", 1);
			write(1, "\n", 1);
			return (0);
		}
		y++;
	}
	write(1, "\n", 1);
	return (0);
}
