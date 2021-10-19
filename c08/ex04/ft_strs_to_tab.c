/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:00:31 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/19 10:33:49 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	ft_strdup(char *src)
{
	char	*dst;
	int		i;

	dst = (char *)malloc(sizeof(*dst) * (ft_strlen(src) + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*string;
	int			i;

	i = 0;
	string = (t_stock_str *) malloc(sizeof (t_stock_str) * (ac + 1));
	if (string == 0)
		return (0);
	while (i < ac)
	{
		string[i].size = ft_strlen(av[i]);
		string[i].str = av[i];
		string[i].copy = ft_strdup(av[i]);
		i++;
	}
	string[i].str = 0;
	return (string);
}
