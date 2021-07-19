#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[11];
	char	*src;

	src = "2reh5ru6rhy";
	ft_strlcpy (dest, src, 11);
	printf("%s", dest);
	return (0);
}
