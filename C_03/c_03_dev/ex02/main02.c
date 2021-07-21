#include "ft_strcat.c"
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);
int	main(void)
{
	char	dest[50] = "hi ";
	char	src[50] = "hello world";

	printf("This should be hi hello world: \n%s\n", ft_strcat(dest, src));
}
