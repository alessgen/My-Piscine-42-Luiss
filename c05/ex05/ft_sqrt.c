/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:28:40 by agenoves          #+#    #+#             */
/*   Updated: 2021/10/14 16:53:13 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_recur(int nb, int nb2)
{
	if (nb > 2147395600)
		return (0);
	if (nb2 * nb2 == nb)
		return (nb2);
	if (nb2 * nb2 < nb)
		return (ft_sqrt_recur(nb, nb2 + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recur(nb, 0));
}
