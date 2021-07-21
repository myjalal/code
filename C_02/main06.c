#include "ft_str_is_printable.c"
#include <stdio.h>

int	ft_str_is_printable(char *str);
int	main(void)
{
	char	*str;
	char	*strtrue;
	
	str = "test\t";
	strtrue = "test";
	printf("this should retrun 0: %d\n", ft_str_is_printable(str));
	printf("this should retrun 1: %d\n", ft_str_is_printable(strtrue));
}
