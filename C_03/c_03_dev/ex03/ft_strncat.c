char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[count])
		count++;
	while (src[i] != '\0' && i < nb)
	{
		dest[count + i] = src[i];
		i++;
	}
	return (dest);
}
