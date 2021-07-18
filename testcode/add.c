#include <stdio.h>

int add(int *x, int *y)
{
	return (*x + *y);
}



int main (void)
{
	int	a;
	int	b;

	a = 5;
	b = 10;

	printf("a + b = %d", add(&a , &b));

}


