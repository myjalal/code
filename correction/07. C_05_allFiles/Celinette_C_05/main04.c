#include "ft_fibonacci.c"
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	index;
	
	printf("*** Verify that the function is recursive ***\n\n");
		   
	index = 9;
	printf("The %dth element of the Fibonacci sequence should be 34: %d\n\n", index, ft_fibonacci(index));
	index = 0;
	printf("The %dth element of the Fibonacci sequence should be 0: %d\n\n", index, ft_fibonacci(index));
	index = -1;
	printf("The %dth element of the Fibonacci sequence should be -1: %d\n", index, ft_fibonacci(index));
}
