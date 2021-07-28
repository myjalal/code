#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;
	int	diff;

	diff = (max - min);
	i = 0;
	res = (int *)malloc(sizeof(int) * diff);
	while (i < diff)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
