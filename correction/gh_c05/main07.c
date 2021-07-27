#include "ft_find_next_prime.c"
#include<stdio.h>

int main(void)
{
	int	i;
	
	i = -5;
	printf("Prime nb are: 2, 3, 5, 7, 11, 13, 17, 19, 23\n");
	while ( i < 24)
	{
		int	prime;
		
		prime = ft_find_next_prime(i);
		printf("Is %d a prime number ?: ", i);
		if (i == prime)
			printf("Yes!\n");
		else
			printf ("No! but the next prime number is: %d\n", prime);
		i++;
	}
}
