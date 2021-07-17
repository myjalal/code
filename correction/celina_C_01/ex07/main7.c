#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	int	counter = 0;
	ft_rev_int_tab(tab, size);
	printf("this should be 54321\n");
	while (counter < size)
	{
		printf("%d", tab[counter]);
		counter++;
	}
	printf("\n");
}
