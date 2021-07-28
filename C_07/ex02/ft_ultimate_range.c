#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	i = 0;
	if (min >= max)
	{
		return (0);
		*range = 0;
	}
	diff = max - min;
	(*range) = (int *)malloc(sizeof(int) * diff);
		if (!(*range))
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (diff);
}
