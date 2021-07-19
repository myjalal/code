#include "ft_str_is_alpha.c"
#include <stdio.h>
int	ft_str_is_alpha(char *str);
int	main(void)
{
	char *str;
	char *strnum;
	
	str = "abc";
	strnum = "abc123efg1h";
	
	printf("this is should be 1: %d\n", ft_str_is_alpha(str));
	printf("this is should be 0: %d\n", ft_str_is_alpha(strnum));
	return (0);
}

