/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 11:16:51 by gehebert          #+#    #+#             */
/*   Updated: 2021/07/25 18:23:54 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power !=0) || power < 0)
		return (0);
	else if ((power == 0) || (nb < 0 && power == 0))
		return (1);
	else
		return (nb * ft_recursive_power(nb, power -1));
}
