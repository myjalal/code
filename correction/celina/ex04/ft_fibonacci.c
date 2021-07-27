int	ft_fibonacci (int index)
{
	int	num;

	num = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 0)
	{
		num = ft_fibonacci (index - 1) + ft_fibonacci (index - 2);
	}
	return (num);
}
