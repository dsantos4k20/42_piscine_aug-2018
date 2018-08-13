/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 01:24:58 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/04 02:21:30 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (nmatch(s1 + 1, s2) || match(s1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
   if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
   		return (nmatch(s1 + 1, s2 + 1));
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
	 	return (1);
	return (0);	
}

void	ft_putstr(char *str)
{
	write(1, &*str, 1);
}

int		main(void)
{
	char s1[] = "main.c";
	char s2[] = "*.c";

	nmatch(s1, s2);
	return (0);
}
