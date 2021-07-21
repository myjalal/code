#include "ft_strlcpy.c"
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[100];
	char	*src;

	src = "2reh5ru6rhy";
	ft_strlcpy (dest, src, 5);
	printf("this should be 11: \n%d\n", ft_strlcpy (dest, src, 5));
	printf("this should be 2reh: \n%s\n", dest);
	return (0);
}
