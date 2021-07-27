#include "ft_fibonacci.c"
#include <stdio.h>

int fibonacci(int ind)
{
	if (ind < 0)
		return (-1);
	if (ind == 0)
		return (0);
	if (ind == 1)
		return (1);
	if (ind >= 2)
		ind = fibonacci(ind - 2) + fibonacci(ind - 1);
	return (ind);
}


int	main (void)
{
	int i;
	
	i = -2;
	while (i < 20)
	{
		printf("should be %d: %d\n", fibonacci(i), ft_fibonacci(i));
		i++;
	}
}

