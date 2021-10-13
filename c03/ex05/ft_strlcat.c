/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:18:55 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/13 09:01:31 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>d

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int res;
	
	i = 0;
	while (dest[i] != '\0')
		i++;
	res = 0;
	while (src[res] != '\0')
		res++;	
	if (size <= i)
		res = res + size;
	else
		res = res + i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (res);
}