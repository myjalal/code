#include "ft_strlen.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*str1;
	str = "123456789";
	str1 = "123456789";
	printf("This is the output of your code: %d\n", ft_strlen(str));
	printf("This is the output of strlen: %lu\n", strlen(str1));
}

