#include "ft_rang.c"
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	diff;
	int	*res;
	
	i = 0;
	min = 5;
	max = -1;
	res = ft_range(min, max);
	diff = max - min;
	while (i < diff)
	{
		printf("%d", res[i]);
		i++;
	}
}
