/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:55:56 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/10 16:28:22 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			i += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
			i -= 32;
		i++;
	write(1, str, 1);
}

int		main(int argc, char **argv)

{
	if (argc == 2)
		ft_ulstr(argv[1]);
	write(1, "\n", 1);
	return (1);
}
