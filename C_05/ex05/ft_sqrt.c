int ft_sqrt(int nb)
{
	int	i;
	int sqr;
	
	sqr = 0;
	i = 0;
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	while (nb >= sqr)
	{
		sqr = i*i;
		if (nb == sqr)
			return (i);
		i++;
	}
	return (0);
}
