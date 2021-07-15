#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	swap;
	//i = 0;
	start = 0;
	//end = size - 1;
	while (size >= 0)
	{
		swap = tab[start];
		tab[start] = tab[size];
		tab[size] = swap;
		start++;
		size++;
		printf("%d", tab[1]);
	}
	
}
int	main(void)
{
	int tab[5] = {1,2,3,4,5};
	int size;
	size = 5;
	ft_rev_int_tab (tab, size);
}
