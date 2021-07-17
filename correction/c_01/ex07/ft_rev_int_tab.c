void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	counter;
	int	debut;
	int	fin;

	temp = 0;
	counter = 0;
	debut = 0;
	fin = size - 1;
	while (counter < size / 2)
	{
		temp = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = temp;
		fin--;
		debut++;
		counter++;
	}
}
