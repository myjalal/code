#include "ft_strncat.c"
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[50] = "hi";
	char	src[50] = "hello world";
	char	det[50] = "hi";
	char	sc[50] = "hello world";
	int		nb;

	nb = 4;
	printf("This should be hihell: \n%s\n", ft_strncat(dest, src, nb));
	
	printf("this is strncat output: \n%s\n", strncat(det, sc, nb));
}
