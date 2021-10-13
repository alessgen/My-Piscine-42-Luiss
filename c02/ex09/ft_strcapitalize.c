/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:13:04 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/13 17:22:04 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if (str[i] > 57 && str[i] < 65 && str[i + 1] >= 97 && str[i + 1] < 123)
			str[i + 1] = str[i + 1] - 32;
		if (str[i] >= 0 && str[i] < 48 && str[i + 1] >= 97 && str[i + 1] < 123)
			str[i + 1] = str[i + 1] - 32;
		if (str[i] > 'z' && str[i + 1] >= 'a' && str[i + 1] < 123)
			str[i + 1] = str[i + 1] - 32;
		if (str[i] > 90 && str[i] < 97 && str[i + 1] >= 97 && str[i + 1] < 123)
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
