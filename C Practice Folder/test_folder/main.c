/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 13:12:12 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/02 16:18:22 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int		main(void)
{
	int		tuna = 42;
	printf("%d\n", ft_strcmp("a", "aa"));
	printf("Address \t Name \t Value \t Ecole \n");
	int	*pTuna =  &tuna;

	printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);

	return (0);
}
