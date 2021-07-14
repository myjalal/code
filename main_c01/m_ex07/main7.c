#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main (void)
{
	int tab[5] = {1,2,3,4,5};
	int size;
	int count;
	
	size = 5;
	
	ft_rev_int_tab (tab, size);
	count = 0;
	while (count < 5)
	{
		printf("%d", tab[count]);
		count++;
	}
}
