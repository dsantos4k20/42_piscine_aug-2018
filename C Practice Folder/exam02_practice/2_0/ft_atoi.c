/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 23:08:13 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/09 22:06:46 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_atoi(char *str)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;
	i = 0;
	while ((str[y] == '\n') || (str[y] == '\t') || (str[y] == '\v') || (str[y] == ' ') || (str[y] == '\f') || (str[y] == '\r'))
		y++;
	if (str[y] == '-')
		i = 1;
	if (str[y] == '+' || str[y] <= '9')
		y++;
	while ((str[y] >= '0') && (str[y] <= '9'))
	{
		x = 10 * x + (str[y] - '0');
		y++;
	}
	if (i == 1)
		return (-x);
	return (x);
}

int		main()
{
	char str[] = "gkjadijgld3109189931;lakdf;lkaj";
	printf("%d\n", ft_atoi(str));
}
