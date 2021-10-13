/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combprova.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:22:08 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/04 17:29:33 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(char n0, char n1, char n2)
{
	ft_putchar(n0);
	ft_putchar(n1);
	ft_putchar(n2);
}

void	ft_print_comb(void)
{
	char	n0;
	char	n1;
	char	n2;

	n0 = '0';
	while (n0 <= '7')
	{
		n1 = n0 + 1;
		while (n1 <= '8')
		{
			n2 = n1 + 1;
			while (n2 <= '9')
			{
				ft_print(n0, n1, n2);
				if (n0 != '7' | n1 != '8' | n2 != '9')
					write (1, ", ", 2);
				n2++;
			}
			n1++;
		}
		n0++;
	}
}
