int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;
	
	fact = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
