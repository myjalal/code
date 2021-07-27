#include "ft_iterative_power.c"
#include <stdio.h>

int iterative_power(int nb, int power)
{
	int	i;
	int res;
	
	i = 0;
	res = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 && power != 0)
		return (0);
	if (power == 0 && nb != 0)
		return (1);
	while(i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

int	main(void)
{
	int	nb;
	int power;
	
	nb = 0;
	power = 0;
	while (power < 7)
	{
		printf("%d power %d is: %d | %d\n", nb, power, iterative_power(nb, power), ft_iterative_power(nb, power));
		power++;
		nb += 2;
	}
}

