#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	counter;
	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = src[counter];
	return (dest);
}

int	main(void)
{
	char *src;
	char dest[16];
	
	src = "qqqqqqqqqqqqqqqq";
	
	printf("%s", ft_strcpy(dest,src));
	
}
