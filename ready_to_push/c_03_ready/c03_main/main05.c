#include "ft_strlcat.c"
#include<stdio.h>
#include <string.h>
int main(void)
{
	unsigned int	size;
	size = 0;
	while (size < 10)
	{
		char 	dest[50] = "ABCDE";
		char	src[50] = "123456";
		char 	dest1[50] = "ABCDE";
		char	src1[50] = "123456";
		
		printf("strlcat returns: %lu\n", strlcat(dest, src, size));
		printf("strlcat destination became: %s\n", dest);
		printf("your function returns: %u\n", ft_strlcat(dest1, src1, size));
		printf("your function destination returns: %s\n", dest1);
		printf("********************\n");
		size++;
	}
}
