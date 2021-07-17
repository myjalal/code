void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	counterA;
	int	counterB;

	counterA = 0;
	while (counterA < size)
	{
		counterB = counterA + 1;
		while (counterB < size)
		{
			if (tab[counterA] > tab[counterB])
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
