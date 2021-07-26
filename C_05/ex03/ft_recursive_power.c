int ft_recursive_power(int nb, int power)
{
	int	i;
	int res;
	
	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 && power != 0)
		return (0);
	if (power == 0 && nb != 0)
		return (1);
	else
		nb = ft_recursive_power(nb, power - 1) * nb;
	return (nb);
}
