/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoad <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 12:34:12 by jgoad             #+#    #+#             */
/*   Updated: 2021/07/22 18:09:44 by jgoad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{	
		if (s1[i] > s2[i])
			return (42);
		else if (s1[i] < s2[i])
			return (-42);
		i++;
	}
	return (0);
}

void	bubble_sort(char **argv, int argc)
{
	char	*temp;
	int		x;
	int		y;

	temp = NULL;
	x = 0;
	y = 0;
	while (x < argc - 1)
	{
		y = 0;
		while (y < argc - 1)
		{
			if (ft_strcmp(argv[y], argv[y + 1]) > 0)
			{
				temp = argv[y];
				argv[y] = argv[y + 1];
				argv[y + 1] = temp;
			}
			y++;
		}
		x++;
	}
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	bubble_sort(argv, argc);
	while (n < argc)
	{
		while (argv[n][i] != '\0')
		{
			ft_putchar(argv[n][i]);
			i++;
		}
		i = 0;
		ft_putchar(10);
		n++;
	}
	return (0);
}
