#include "ft_iterative_factorial.c"
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 0;
	printf("The number is: %d\nThe result should be 1: %d\n", nb, ft_iterative_factorial(nb));
	nb = 5;
	printf("The number is: %d\nThe result should be 120: %d\n", nb, ft_iterative_factorial(nb));
	nb = -5;
	printf("The number is: %d\nThe result should be 0: %d\n", nb, ft_iterative_factorial(nb));
	nb = 12;
	printf("The number is: %d\nThe result should be 479001600: %d\n", nb, ft_iterative_factorial(nb));
}
