int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (nbr < 0)
	{
		write (1, "-", 1);
		ft_putnbr_base(-(nbr / len), base);
		write(1, &base[-(nbr % len)], 1);
	}
	else
	{
		if (nbr > len - 1)
			ft_putnbr_base((nbr / len), base);
		write(1, &base[nbr % len], 1);
	}
}
