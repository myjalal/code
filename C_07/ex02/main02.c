#include "ft_ultimate_range.c"
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -5, 213));
	while (i < 213)
	{
		printf("[%d]", range[i]);
		i++;
	}
	return (0);
}
