int ft_strlen(char *str)
{
	unsigned int	i;
	
	while (str[i] != '\0')
		i++;
	return (i);
}
