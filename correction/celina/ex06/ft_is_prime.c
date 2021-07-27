int	ft_is_prime (int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb / (i - 1))
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
