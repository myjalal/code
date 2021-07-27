/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:55:09 by anarodri          #+#    #+#             */
/*   Updated: 2021/07/26 15:54:18 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	minus;
	int	plus;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	minus = ((nb - 1) % 6);
	plus = ((nb + 1) % 6);
	if (minus == 0 || plus == 0)
		return (1);
	else
		return (0);
}
