#include <unistd.h>
#include <stdio.h>

int add (int	a, int	b)
{
	int c;
	c = a+b;
	return (c);
	
}

int main (void)
{
	int c;
	c = add(1, 6);
	printf("%d", c);
}
