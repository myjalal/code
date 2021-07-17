#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);

int main (void)
{
	int tab[5] = {1,8,5,3,4};
	int size;
	int count;
	
	size = 5;
	
	ft_sort_int_tab(tab, size);
	count = 0;
	while (count < 5)
	{
		printf("%d", tab[count]);
		count++;
	}
}
