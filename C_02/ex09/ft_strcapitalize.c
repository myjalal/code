char	*ft_strcapitalize(char *str)
{
	int	x;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	x = 1;
	while (str[x] != '\0')
	{
		if ((((str[x] >= 'a' && str[x] <= 'z')
					|| (str[x] >= 'A' && str[x] <= 'Z')) && (str[x - 1] < '0'))
			|| (str[x - 1] > '9' && str[x - 1] < 'A')
			|| (str[x - 1] > 'Z' && str[x - 1] < 'a') || (str[x - 1] > 'z'))
		{
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] -= 32;
		}
		else if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] += 32;
		++x;
	}
	return (str);
}
