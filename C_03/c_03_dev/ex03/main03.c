#include "ft_strncat.c"
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[50] = "hi";
	char	src[50] = "hello world";
	int		nb;

	nb = 4;
	printf("This should be hihell: \n%s\n", ft_strncat(dest, src, nb));
}
