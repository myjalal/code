#include "ft_str_is_numeric.c"
#include <stdio.h>
int ft_str_is_numeric(char *str);
int	main(void)
{
	char *str;
	char *strnum;
	
	str = "123";
	strnum = "123e247";
	
	printf("this is should be 1: %d\n", ft_str_is_numeric(str));
	printf("this is should be 0: %d\n", ft_str_is_numeric(strnum));
	//return (0);
}

