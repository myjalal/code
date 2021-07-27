/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:24:48 by gehebert          #+#    #+#             */
/*   Updated: 2021/07/26 14:43:32 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	if (nb == 1)
		return (1);
	if (nb <=2)
		return (nb);
	return (ft_fibonacci(nb - 2) + ft_fibonacci(nb - 1));
}
