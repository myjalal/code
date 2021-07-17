void	ft_swap (int *a, int *b);

void	ft_rev_int_tab (int *tab, int size)
{
	int	delta;

	delta = 0;
	while (delta < size / 2)
	{
		ft_swap(&tab[size - delta - 1], &tab[delta]);
		delta++;
	}
}

void	ft_swap (int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
