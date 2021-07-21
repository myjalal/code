#include "ft_strcpy.c"
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src;
	char dest[100];
	
	src = "123abc!!";
	
	printf("this should be 123abc!!: %s\n", ft_strcpy(dest,src));
	
}
