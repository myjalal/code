int	ft_find_next_prime (int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	else
	{
		while (i < nb)
		{
			if (nb % i != 0)
				i++;
			else
				nb = ft_find_next_prime (nb + 1);
		}
	}
	return (nb);
}
