void	ft_sort_int_tab (int *tab, int size)
{
	int	fix;
	int	mobile;
	int	temp;

	fix = 0;
	mobile = 1;
	while (fix < size)
	{
		while (mobile < size)
		{
			if (tab[fix] > tab[mobile])
			{
				temp = tab[fix];
				tab[fix] = tab[mobile];
				tab[mobile] = temp;
			}
			mobile++;
		}
		fix++;
		mobile = fix + 1;
	}
}
