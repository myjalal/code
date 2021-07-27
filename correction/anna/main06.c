#include "ft_is_prime.c"
#include <stdio.h>

int main(void)
{
	int	i;
	
	i = -5;
	printf("Prime nb: 2, 3, 5, 7, 11, 13, 17, 19, 23\n");
	while ( i < 24)
	{
		printf("is %d prime number? ", i);
		if (ft_is_prime(i) == 0 )
			printf ("no!\n");
		if (ft_is_prime(i) == 1 )
			printf("yes!\n");
		i++;
	}
}
