/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechekao <jechekao@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:30:06 by jechekao          #+#    #+#             */
/*   Updated: 2021/07/27 11:30:08 by jechekao         ###   ########.fr       */
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
