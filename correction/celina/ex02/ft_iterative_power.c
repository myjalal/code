int	ft_iterative_power (int nb, int power)
{
	int	number;

	number = 1;
	if (power < 0)
		return (0);
	if (power < 0)
	{
		while (power < 0)
		{
			number = number * nb;
			power++;
		}
		return (1 / number);
	}
	else
	{
		while (power > 0)
		{
			number = number * nb;
			power--;
		}
		return (number);
	}
}
