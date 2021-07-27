char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	inc;

	i = 0;
	inc = 0;
	if (to_find[inc] == '\0')
		return (str);
	while (str[i] != '\0' && to_find[inc] != '\0')
	{
		if (str[i] == to_find[inc])
		{
			while (str[i + inc] == to_find[inc] && to_find[inc] != '\0')
				inc++;
		}
		if (to_find[inc] == '\0')
			return (&str[i]);
		i++;
		inc = 0;
	}
	return (0);
}
