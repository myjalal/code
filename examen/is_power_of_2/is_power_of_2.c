#include <unistd.h>
#include <stdio.h>
int	    is_power_of_2(unsigned int n)
{
	if (n % 2 == 0)
		return (1);
	return(0);
}
int	main(void)
{
	printf("%d", is_power_of_2(5));
}
