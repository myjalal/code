/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan-chu <cwan-chu@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:28:55 by cwan-chu          #+#    #+#             */
/*   Updated: 2021/07/27 13:28:57 by cwan-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	else
	{
		while (i < nb / (i - 1))
		{
			if (nb % i != 0)
				i++;
			else
				nb = ft_find_next_prime (nb + 1);
		}
	}
	return (nb);
}
