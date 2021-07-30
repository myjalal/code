/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechekao <jechekao@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:14:54 by jechekao          #+#    #+#             */
/*   Updated: 2021/07/29 11:14:57 by jechekao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;
	int	diff;

	diff = (max - min);
	i = 0;
	res = (int *)malloc(sizeof(int) * diff);
	while (i < diff)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
