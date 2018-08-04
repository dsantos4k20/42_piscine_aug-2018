/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 16:11:35 by dsantos           #+#    #+#             */
/*   Updated: 2018/07/27 16:43:45 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(int *ptr);

int		main(void)
{
	int		a;
	int		*ptr;

	a = 42;
	ptr = &a;
	ft_putaddr(ptr);

	return (0);
}
