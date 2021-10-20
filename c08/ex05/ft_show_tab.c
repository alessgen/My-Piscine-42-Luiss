/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:15:38 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/20 15:39:29 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"
#include <limits.h> 

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb == INT_MIN)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		number = -nb;
	}
	else
		number = nb;
	if (number > 9)
	{
		ft_putnbr(number / 10);
		number %= 10;
	}
	ft_putchar(number + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (par == '\0')
		return ;
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		par++;
	}
}
