/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:26:35 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/14 10:22:15 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	is_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	cc;

	i = 0;
	while (true)
	{
		cc = str[i];
		if (cc == '\0')
			break ;
		if (is_printable(cc))
			ft_putchar(cc);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[cc / 16]);
			ft_putchar("0123456789abcdef"[cc % 16]);
		}
		i++;
	}
}
