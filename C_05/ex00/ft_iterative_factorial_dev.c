#include <stdio.h>

int	main(void)
{
	int					n;
	int					i;
	unsigned long long	fact;

	fact = 1;
	i = 1;
	printf("Enter an integer: ");
	scanf("%d", &n);
	if (n < 0)
		printf("Error! Factorial of a negative number doesn't exist.");
	else
	{
		while (i <= n)
		{
			fact *= i;
			i++;
		}
		printf("Factorial of %d = %llu\n", n, fact);
	}
	return (0);
}
