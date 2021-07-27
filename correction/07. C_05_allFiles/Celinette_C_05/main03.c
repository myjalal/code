#include "ft_recursive_power.c"
#include <stdio.h>
//#include <limits.h>
int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 8;
	printf("For nb = %d and power = %d\n", nb, power);
	printf("The result should be 256 = %d\n\n", ft_recursive_power(nb, power));
		   
	nb = 0;
	power = 0;
	printf("For nb = %d and power = %d\n", nb, power);
	printf("The result should be 1 = %d\n\n", ft_recursive_power(nb, power));
	
	nb = -2;
	power = 5;
	printf("For nb = %d and power = %d\n", nb, power);
	printf("The result should be -32 = %d\n\n", ft_recursive_power(nb, power));
	
	nb = -10;
	power = 0;
	printf("For nb = %d and power = %d\n", nb, power);
	printf("The result should be 1 = %d\n\n", ft_recursive_power(nb, power));
	
	nb = -10;
	power = -2;
	printf("For nb = %d and power = %d\n", nb, power);
	printf("The result should be 0 = %d\n\n", ft_recursive_power(nb, power));
	
	nb = -102;
	power = 1;
	printf("For nb = %d and power = %d\n", nb, power);
	printf("The result should be -102 = %d\n\n", ft_recursive_power(nb, power));
	
	nb = -10;
	power = 2;
	printf("For nb = %d and power = %d\n", nb, power);
	printf("The result should be 100 = %d\n\n", ft_recursive_power(nb, power));
}
