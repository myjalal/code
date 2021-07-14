#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_is_negative (int n);

int main (void)
{
	int x;
	int y;
	
	x=105;
	y=25;
	ft_ultimate_div_mod(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}
