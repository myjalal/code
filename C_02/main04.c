#include "ft_str_is_lowercase.c"
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;
	char	*strfalse;

	str = "abc";
	strfalse = "ab c";
	printf("this should be 1: %d\n", ft_str_is_lowercase(str));
	printf("this should be 0: %d\n", ft_str_is_lowercase(strfalse));
}
