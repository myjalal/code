char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[count])
		count++;
	while (src[i])
	{
		dest[count + i] = src[i];
		i++;
	}
	return (dest);
}
