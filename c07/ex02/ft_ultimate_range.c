/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:35:03 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/18 09:08:38 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	i = -1;
	if (tab == 0)
		return (0);
	if (tab != 0)
	{
		while (++i <= max - min)
			tab[i] = min + i;
		*range = tab;
		return (i);
	}
	return (1);
}
