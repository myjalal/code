#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int mod;
	
	div = *a / *b;
	mod = *a % *b;
	
	*a = div;
	*b = mod;
	printf("%d\n", *a);
	printf("%d", *b);
}

int	main (void)
{
	int test1 = 125;
	int test2 = 5;
	ft_ultimate_div_mod(&test1, &test2);

}
