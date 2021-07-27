/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechekao <jechekao@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:18:21 by jechekao          #+#    #+#             */
/*   Updated: 2021/07/27 11:18:31 by jechekao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write (1, &c, 1);
}

int	main(int	argc, char	*argv[])
{
	int	i;

	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i])
		{
			ft_putchar(argv[argc - 1][i]);
			i++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
