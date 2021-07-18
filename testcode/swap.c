#include <stdio.h>
int swap(int *x,int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
	return(0);
}

int main(void)
{
	int a;
	int b;
	
	a = 10;
	b = 20;

	printf("a = %d and b = %d \n", a, b);
	printf("swaping ...\n");
	swap(&a, &b);
	printf("a = %d and b = %d \n", a, b);
}
