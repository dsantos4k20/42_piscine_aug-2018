/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kitt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 12:52:30 by dsantos           #+#    #+#             */
/*   Updated: 2018/07/29 13:01:07 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char kitty[20];

	printf("What would you like to name your cat?");
	gets(kitty);
	printf("%s is a nice name. What else do you have in mind?",kitty);
	gets(kitty);
	printf("%s is nice. too.\n",kitty);
	return(0);
}
