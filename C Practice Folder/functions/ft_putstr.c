/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 20:44:08 by dsantos           #+#    #+#             */
/*   Updated: 2018/07/30 21:12:28 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_putchar(char c);

int		ft_putstr(char *str)
{ 
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i]);
		i++;
}		

int		main()
{
	char str1[] = "Ecole_42";

	ft_putstr(str1);
	return(0);
}
