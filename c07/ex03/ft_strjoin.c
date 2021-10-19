/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:56:38 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/19 13:40:54 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		a;
	int		b;
	int		c;
	int		len;

	a = 0;
	b = 0;
	c = 0;
	len = 1;
	while (a < size)
		len = len + ft_strlen(strs[a++]) + ft_strlen(sep);
	tab = malloc(sizeof(char *) * len);
	a = -1;
	while (++a < size)
	{
		while (strs[a][b])
			tab[c++] = strs[a][b++];
		b = 0;
		while (sep[b] && a < size - 1)
			tab[c++] = sep[b++];
		b = 0;
	}
	tab[c] = '\0';
	return (tab);
}
