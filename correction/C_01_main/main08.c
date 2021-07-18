#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab (int *tab, int size);
//void	ft_swap (int *a, int *b);

int	main (void)
{
	int tab[] = {-120, 59, 3, 38, 102};
	int	size;
	int count;

	size = 5;
	ft_sort_int_tab(tab, size);
	count = 0;
	while (count < size)
	{
		printf ("%d, ", tab[count]);
		count++;
	}
}
