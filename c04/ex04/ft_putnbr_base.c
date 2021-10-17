/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:57:37 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/17 11:54:53 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base_valid(char *base)
{
	int	i;

	i = 0;
	if (*base == '\0' || ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	putnbr_recursive(long nbr, char *base, int base_l)
{
	char	number;

	if (nbr == 0)
		return ;
	number = *(base + (nbr % base_l));
	putnbr_recursive(nbr / base_l, base, base_l);
	write (1, &number, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_l;

	if (!check_base_valid(base))
		return ;
	base_l = ft_strlen(base);
	if (nbr > 0)
		putnbr_recursive(nbr, base, base_l);
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		putnbr_recursive((nbr / -base_l), base, base_l);
		write(1, &base[nbr % base_l], 1);
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
		putnbr_recursive(nbr, base, base_l);
	}
}
