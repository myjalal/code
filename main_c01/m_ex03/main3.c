#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);
int main (void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a  = 47;
	b = 5;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
}
