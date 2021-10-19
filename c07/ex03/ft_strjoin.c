/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:56:38 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/18 18:09:54 by agenoves         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size && size > 0)
		j = j + ft_strlen(strs[i++]) + ft_strlen(sep);
	tab = malloc((j + 1) * sizeof(char));
	j = 0;
	i = 0;
	while (i < size)
	{
		ft_strcpy(tab + j, strs[i]);
		j = j + ft_strlen(strs[i]);
		if (i++ < size)
		{
			ft_strcpy(tab + j, sep);
			j = j + ft_strlen(sep);
		}
	}
	tab = '\0';
	return (tab);
}
