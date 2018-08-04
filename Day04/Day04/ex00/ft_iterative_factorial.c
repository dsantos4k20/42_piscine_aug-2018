/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 20:15:14 by dsantos           #+#    #+#             */
/*   Updated: 2018/07/28 21:24:41 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_iterative_factorial(int nb);

int fn(int i)
{
	if (i<=2)
	{
		i += 1;
		write(1, "42", 1);
		fn(i);
		return(0);
	}
	else
	{
		return(0);
	}
}

int main()
{
	fn(0);
	return (0);

}


