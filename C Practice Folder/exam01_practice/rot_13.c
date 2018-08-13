/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 16:27:17 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/06 17:04:35 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rot_13(char c)
{
	if ((c > 'A' && c < 'M') || (c > 'a' && c < 'm'))
		c += 13;
	if ((c > 'N' && c < 'Z') || (c > 'n' && c < 'z'))
		c -= 13;
	return ();
}

int		main(int argc, char **argv)
{
	{
		if (argc == 2)
		while (*argv[1])
			ft_putchar(rot_13(*argv[1]++));
	}
	ft_putchar('\n');
	return (0);
}
