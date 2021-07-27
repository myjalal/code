/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   :nohft_recursive_factorial.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:20:41 by anarodri          #+#    #+#             */
/*   Updated: 2021/07/24 11:13:43 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
