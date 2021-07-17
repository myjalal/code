#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);
int	main(void)
{
	int	tab[] = {10, 15, 6, 1, -19};
	int counter = 0;
	int size = 5;
	ft_sort_int_tab(tab, size);
	printf("this should be -19161015\n");
	while(counter < size)
	{
		printf("%d", tab[counter]);
		counter++;
	}
	printf("\n");
}
