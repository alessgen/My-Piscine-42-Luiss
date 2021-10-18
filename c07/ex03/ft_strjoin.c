/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:56:38 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/18 12:57:54 by agenoves         ###   ########.fr       */
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
	int		j;
	int		totlen;

	j = 0;
	totlen = 1;
	while (j < size)
		totlen = totlen + ft_strlen(*strs) + ft_strlen(sep);
	tab = malloc(sizeof(totlen) + 1);
	j = -1;
	while (++j < size)
	{
		tab = ft_strcpy(tab, strs[j]);
		if (j + 1 < size)
			tab = ft_strcpy(tab, sep);
	}
	if (tab == 0)
		return (0);
	*tab = '\0';
	return (tab);\
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	char *str;
	char *sep;
	char **strs;

	if (argc < 2)
		return (0);
	sep = argv[1];
	strs = malloc((argc - 2) * sizeof(char*));
	i = 0;
	j = 0;
	while (i < argc - 2)
	{
		strs[i] = argv[i + 2];
		i++;
	}
	str = ft_strjoin(i, strs, sep);
	printf("Separator: %s\nStr: %s\n", sep, str);
	return (0);
}