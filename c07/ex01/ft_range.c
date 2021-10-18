/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:09:31 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/18 08:41:31 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	range = malloc(sizeof(int) * (max - min + 1));
	if (min >= max || range == 0)
		return (0);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
