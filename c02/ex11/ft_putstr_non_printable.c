/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:26:35 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/13 17:29:15 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_hexa(char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
		{
			ft_putchar('\\');
			ft_convert_hexa(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
