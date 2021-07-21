#include "ft_strncpy.c"
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *src;
	char dest[100];
	
	src = "123456789";
	
	printf("this should be 1 to 6: %s\n", ft_strncpy(dest, src, 6));
}
