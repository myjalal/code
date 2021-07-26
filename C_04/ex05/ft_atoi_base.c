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

static int	ft_find_base(char ch, char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		if (ch == base[count])
			return (count);
		count++;
	}
	return (-1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\t' || base[i] == '\n'
			|| base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
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

int	ft_check_str (char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		   || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = (sign * -1);
		i++;
	}
	return (sign * i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	base_nbr;
	int	sign;
	int	i;

	sign = 1;
	if (!ft_check_base(base))
		return (0);
	i = ft_check_str(str);
	if (i < 0)
	{
		i = i * -1;
		sign = -1;
	}
	base_nbr = (int)ft_strlen(base);
	number = 0;
	while (str[i] != '\0')
	{
		number *= base_nbr;
		if (ft_find_base(str[i], base) == -1)
			return (0);
		number += (ft_find_base(str[i], base));
		i++;
	}
	return (number * sign);
}
