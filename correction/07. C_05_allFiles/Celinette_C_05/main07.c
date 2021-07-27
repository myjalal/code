#include <stdio.h>
#include "ft_find_next_prime.c"

int	ft_find_next_prime (int nb);

int	main(void)
{
	int num;
	
	num = -22;
	printf("The number is: %d, next prime should be 2: %d.\n", num, ft_find_next_prime(num));
	
	num = -1;
	printf("The number is: %d, next prime should be 2: %d.\n", num, ft_find_next_prime(num));
	
	num = 0;
	printf("The number is: %d, next prime should be 2: %d.\n", num, ft_find_next_prime(num));
	
	num = 1;
	printf("The number is: %d, next prime should be 2: %d.\n", num, ft_find_next_prime(num));
	
	num = 2;
	printf("The number is: %d, next prime should be 2: %d.\n", num, ft_find_next_prime(num));
	
	num = 3;
	printf("The number is: %d, next prime should be 3: %d.\n", num, ft_find_next_prime(num));
	
	num = 4;
	printf("The number is: %d, next prime should be 5: %d.\n", num, ft_find_next_prime(num));
	
	num = 13;
	printf("The number is: %d, next prime should be 13: %d.\n", num, ft_find_next_prime(num));
	
	num = 14;
	printf("The number is: %d, next prime should be 17: %d.\n", num, ft_find_next_prime(num));
	
	num = 66;
	printf("The number is: %d, next prime should be 67: %d.\n", num, ft_find_next_prime(num));
	
	num = 966;
	printf("The number is: %d, next prime should be 967: %d.\n", num, ft_find_next_prime(num));
	
	num = 2147483645;
	printf("The number is: %d, next prime should be 2147483647: %d.\n", num, ft_find_next_prime(num));
}
