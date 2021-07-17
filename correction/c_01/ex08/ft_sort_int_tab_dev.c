#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int counterA;
	int counterB;
	
	counterA = 0;
	while(counterA < size)
	{
		counterB = counterA + 1;
		while(counterB < size)
		{
			if(tab[counterA] > tab[counterB])
			{
				temp = tab[counterA];
				tab[counterA] = tab[counterB];
				tab[counterB] = temp;
			}
			counterB++;
		}
		counterA++;
	}
}

int	main(void)
{
	int	tab[] = {10, 15, 6, 1, -19};
	int counter = 0;
	int size = 5;
	ft_sort_int_tab(tab, size);

		while(counter < size)
	{
		printf("%d", tab[counter]);
		counter++;
	}
}

