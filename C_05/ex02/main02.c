#include "ft_iterative_power.c"
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	
	nb = 8;
	power = -6;
	printf("output 5-0 1-1 1-8 1-64 1-512 1-4096");
	while (power < 5)
	{
		printf("%d\n", ft_iterative_power(nb, power));
		power++;
	}
}

