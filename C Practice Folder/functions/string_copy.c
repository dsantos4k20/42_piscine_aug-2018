/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 12:35:51 by dsantos           #+#    #+#             */
/*   Updated: 2018/07/31 12:48:36 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char		ft_strcpy(char *dest, char *src);

int			main()
{
	char str1[] = "Hello 42";
	char str2[] = "Bonjou 42";
	char str3[] = "Hola 42";

	strcpy(str2, str1);
	strcpy(str3, "Copy successful");
	printf("str1, %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return 0;
}
