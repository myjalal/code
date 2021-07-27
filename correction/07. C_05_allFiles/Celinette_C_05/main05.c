#include "ft_sqrt.c"
#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 1;
	printf("The number is %d\nThe result should be 1: %d\n\n", nb, ft_sqrt(nb));
	nb = 81;
	printf("The number is %d\nThe result should be 9: %d\n\n", nb, ft_sqrt(nb));
	nb = 10;
	printf("The number is %d\nThe result should be 0: %d\n\n", nb, ft_sqrt(nb));
	nb = -4;
	printf("The number is %d\nThe result should be 0: %d\n\n", nb, ft_sqrt(nb));
	nb = 1243408644;
	printf("The number is %d\nThe result should be 35262: %d\n\n", nb, ft_sqrt(nb));
	nb = 2147395600;
	printf("The number is %d\nThe result should be 46340: %d\n\n", nb, ft_sqrt(nb));

	printf("Let's check for [0, 10]\n");
	for (int i = 0; i < 11; i++)
	{
		if (ft_sqrt(i))
			printf("nb = %d\nsqrt = %d\n", i, ft_sqrt(i));
	}

}
