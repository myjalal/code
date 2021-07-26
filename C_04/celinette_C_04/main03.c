#include <stdio.h>
#include "ft_atoi.c"

int	main (void)
{
	char	*str;

	str = "123ab567";
	printf("The string is %s and the result should be 123: %d\n", str, ft_atoi(str));
	
	str = "---+--+123ab567";
	printf("The string is %s and the result should be -123: %d\n", str, ft_atoi(str));
	
	str = "-123ab567";
	printf("The string is %s and the result should be -123: %d\n", str, ft_atoi(str));
	
	str = "   123ab567";
	printf("The string is %s and the result should be 123: %d\n", str, ft_atoi(str));
	
	str = " 		- 123ab567 with a space after the minus sign";
	printf("The string is %s and the result should be 0: %d\n", str, ft_atoi(str));
	
	str = "-2147483648";
	printf("The string is %s and the result should be -2147483648: %d\n", str, ft_atoi(str));
}
