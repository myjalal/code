#include "ft_strcat.c"
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);
int	main(void)
{
	char	dest[50] = "Hi my name is Yoda ";
	char	src[50] = "what's your name?";

	printf("This should be Hi my name is Yoda what's your name?: \n%s\n", ft_strcat(dest, src));
}
