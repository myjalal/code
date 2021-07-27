int	ft_iterative_factorial (int nb)
{
	int	i;
	int	number;

	i = 1;
	number = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			number = number * i;
			i++;
		}
	}
	return (number);
}
