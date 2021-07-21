#include<stdio.h>
#include <string.h>
int main(void)
{
	char 	dest[50] = "ABCDE";
	char	src[50] = "123456";
	unsigned int	size;
	
	size = 0;
	printf("%lu", strlcat(dest, src, size));
	printf("%s", dest);
}
