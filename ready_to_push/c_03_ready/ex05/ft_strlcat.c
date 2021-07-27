int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen_src;
	unsigned int	slen_dest;
	unsigned int	count;

	slen_src = ft_strlen(src);
	slen_dest = ft_strlen(dest);
	count = 0;
	if (size <= slen_dest)
		return (slen_src + size);
	while (count < size - slen_dest - 1 && src[count])
	{
		dest[slen_dest + count] = src[count];
		count++;
	}
	dest[slen_dest + count] = '\0';
	return (slen_dest + slen_src);
}
