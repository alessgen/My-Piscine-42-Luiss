/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:35:03 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/19 13:11:55 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	b;

	if (min >= max)
		return (0);
	b = max - min - 1;
	tab = (int *)malloc(sizeof(*tab) * (b));
	if (b == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	i = -1;
	while (++i <= b)
		tab[i] = min + i;
	return (b + 1);
}
