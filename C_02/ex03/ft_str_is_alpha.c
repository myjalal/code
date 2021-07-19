int	ft_str_is_alpha(char *str)
{
	int count;
	int result;
	
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || (str[count] > 'Z' && str[count] < 'a') || str[count] >'z')
			return (0);
		count++;
	}
	return (1);
}
