#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	counter;
	counter = 0;
	while (src[counter] != '\0' && counter < n  )
	{
		dest[counter] = src[counter];
		counter++;
		//n--;
	}
	printf("%d\n", counter);
	while (counter < n)
	{
		printf("%d\n", counter);
		dest[counter] = '\0';
		counter++;
	}
	printf("%d\n", counter);
	return (dest);
}
int	main(void)
{
	char *src;
	char dest[101];
	
	src = "abchdgjkrikf";
	
	printf("%s#", ft_strncpy(dest, src, 6));
	
}
