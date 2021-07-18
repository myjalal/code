int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] < 32)
			return (0);
		count++;
	}
	return (1);
}
