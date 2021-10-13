/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 11:36:40 by tterribi          #+#    #+#             */
/*   Updated: 2021/10/02 16:54:44 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_borders1(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == y && j == x)) 
		ft_putchar('o');
	else if ((i == 1 && j == x ) || (i == y && j == 1))
		ft_putchar('o');
	else if (((i == 1 || i == y) && (j < x)))
		ft_putchar('-');
	else if (((j == 1 || j == x) && (i < y)))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				ft_print_borders1(i, j, x, y);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
