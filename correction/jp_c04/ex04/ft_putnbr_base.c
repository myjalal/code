/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:42:43 by pirichar          #+#    #+#             */
/*   Updated: 2021/07/26 14:44:15 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
int		ft_checkbase(char *base);
void	ft_putnbr_base(int nbr, char *base);

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == 0 || base[1] == 0)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baseCount;

	baseCount = ft_strlen(base);
	if (ft_checkbase(base) == 0)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			nbr = (147483648);
		}
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= baseCount)
		{
			ft_putnbr_base(nbr / baseCount, base);
			ft_putnbr_base(nbr % baseCount, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
