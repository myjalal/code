#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str_1;
	char	*str_0;

	str_1 = "";
	str_0 = "abc";
	printf("this should be 1: %d\n", ft_str_is_uppercase(str_1));
	printf("this should be 0: %d\n", ft_str_is_uppercase(str_0));
}
