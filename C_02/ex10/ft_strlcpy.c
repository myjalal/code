unsigned int	ft_strlcpy (char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < size - 1)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < size)
	{
		dest[count] = '\0';
		count++;
	}
	return (0);
}
