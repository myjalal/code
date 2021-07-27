#include "ft_recursive_power.c"
#include <stdio.h>

int recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * recursive_power(nb, power - 1));
}

int	main(void)
{
	int	nb;
	int power;
	
	nb = 0;
	power = 0;
	while (power < 7)
	{
		printf("%d power %d is: %d | %d\n", nb, power, recursive_power(nb, power), ft_recursive_power(nb, power));
		power++;
		nb += 2;
	}
}

