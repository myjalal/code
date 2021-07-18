#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i; //i is a counter 
	i = 0;
	while (src[i] != '\0' && i < n)
	{
			dest[i] = src[i];
			i++;
			n--;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char *src;
	char dest[101];

	src = "abcdefghij";
	printf("%s", ft_strncpy(dest, src, 6));
}
