/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechekao <jechekao@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:15:00 by jechekao          #+#    #+#             */
/*   Updated: 2021/07/27 11:15:17 by jechekao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int	argc, char	*argv[])
{
	int	i;
	int	j;

	i = 0;
	j = argc;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	write(1, "\n", 1);
}
