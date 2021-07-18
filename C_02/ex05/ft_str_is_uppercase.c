int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] > 'Z' || str[count] < 'A')
			return (0);
		count++;
	}
	return (1);
}
