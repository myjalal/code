#include "ft_recursive_factorial.c"
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;
	
	printf("Verify that function is recursive\n\n");
	nb = 0;
	printf("The number is: %d\nThe result should be 1: %d\n", nb, ft_recursive_factorial(nb));
	nb = 6;
	printf("The number is: %d\nThe result should be 720: %d\n", nb, ft_recursive_factorial(nb));
	nb = -5;
	printf("The number is: %d\nThe result should be 0: %d\n", nb, ft_recursive_factorial(nb));
	nb = 12;
	printf("The number is: %d\nThe result should be 479001600: %d\n", nb, ft_recursive_factorial(nb));
}
