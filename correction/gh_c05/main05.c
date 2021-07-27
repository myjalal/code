#include "ft_sqrt.c"
#include <stdio.h>

int f_sqrt(int nbr)
{
	int	i;
	int sqr;
	
	sqr = 0;
	i = 0;
	if (nbr == 1)
		return (1);
	if (nbr == 0)
		return (0);
	while (nbr >= sqr)
	{
		sqr = i*i;
		if (nbr == sqr)
			return (i);
		i++;
	}
	return (0);
}

int main(void)
{
	int	i;
	int num;
	
	i = 1;
	num = -1;
	while (i <= 50)
	{
		printf("sqrt of %d should be %d: %d\n", num, f_sqrt(num), ft_sqrt(num));
		num = i * i;
		i++;
	}
}
