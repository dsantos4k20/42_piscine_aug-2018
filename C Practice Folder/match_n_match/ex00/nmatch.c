/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 01:24:58 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/04 10:59:05 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		nmatch(char *s1, char *s2)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s1[i] = s2[j])
	{
		i++;
		j++;
	}
	if (s1[i] == '\0')
		return (s1);
		return (NULL);
}

void	ft_putstr(char *str)
{
	write(1, &*str, 1);
}

int		main(void)
{
	char s1[] = "abcbd";
	char s2[] = "*b*";

	printf("%d", nmatch(s1, s2));
	return (0);
}
