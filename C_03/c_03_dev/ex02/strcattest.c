#include <string.h>
#include <stdio.h>
/*char *ft_strcat(char *dest, char *src)
{
	
	
	return (dest)
}*/

int	main(void)
{
	char	dest[50] = "hi";
	char	src[50] = "hello world";
	
	printf("%s", strcat(dest, src));
}
