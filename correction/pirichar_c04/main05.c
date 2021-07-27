#include <unistd.h>
#include <stdio.h>
#include "ft_atoi_base.c"

int	ft_atoi_base (char *str, char *base);

int	main (void)
{
	char	*num;
	char	*bin = "01";
	char	*octal = "poneyvif";
	char	*deci_octal = "01234567";
	char	*deci = "0123456789";
	char	*hexa = "0123456789ABCDEF";

	num = "0";
	printf("The string is:%s \n", num);
	printf("The binary result should be \n0 : \n%d\n", ft_atoi_base (num, bin));
	write (1, "\n", 1);
	printf("The octal (01234567) result should be \n0 : \n%d\n", ft_atoi_base (num, deci_octal));
	write (1, "\n", 1);
	printf("The decimal result should be \n0 : \n%d\n", ft_atoi_base (num, deci));
	write (1, "\n", 1);
	printf("The hexadecimal result should be \n0 : \n%d\n", ft_atoi_base (num, hexa));
	write (1, "\n", 1);
	write (1, "\n", 1);
	
	num = "y";
	printf("The string is:%s \n", num);
	printf("The octal result should be \n4 : \n%d\n", ft_atoi_base (num, octal));
	write (1, "\n", 1);
	
	num = "-173";
	printf("The string is:%s \n", num);
	printf("The octal (01234567) result should be \n-123 : \n%d\n", ft_atoi_base (num, deci_octal));
	write (1, "\n", 1);
	
	num = "-10000000000000000000000000000000";
	printf("The string is:%s \n", num);
	printf("The bin result should be \n-2147483648 : \n%d\n", ft_atoi_base (num, bin));
	write (1, "\n", 1);
	
	num = "1111111111111111111111111111111";
	printf("The string is:%s \n", num);
	printf("The bin result should be \n2147483647 : \n%d\n", ft_atoi_base (num, bin));
	write (1, "\n", 1);
	
	num = "123456789";
	write (1, "\n", 1);
	printf("The decimal result should be \n123456789 : \n%d\n", ft_atoi_base (num, deci));
	write (1, "\n", 1);
	
	num = "-123456789";
	write (1, "\n", 1);
	printf("The decimal result should be \n-123456789 : \n%d\n", ft_atoi_base (num, deci));
	write (1, "\n", 1);
/*
	num = -123;
	printf("The number is %d: \n", num);
	printf("The binary result should be \n-1111011 : \n");
	ft_atoi_base (num, bin);
	write (1, "\n", 1);
	printf("The octal result should be \n-ofe : \n");
	ft_atoi_base (num, octal);
	write (1, "\n", 1);
	printf("The octal (01234567) result should be \n-173 : \n");
	ft_atoi_base (num, deci_octal);
	write (1, "\n", 1);
	printf("The decimal result should be \n-123 : \n");
	ft_atoi_base (num, deci);
	write (1, "\n", 1);
	printf("The hexadecimal result should be \n-7B : \n");
	ft_atoi_base (num, hexa);
	write (1, "\n", 1);
	write (1, "\n", 1);
	
	num = -2147483648;
	printf("The number is %d: \n", num);
	printf("The binary result should be \n-10000000000000000000000000000000 : \n");
	ft_atoi_base (num, bin);
	write (1, "\n", 1);
	printf("The octal result should be \n-npppppppppp : \n"); //xx
	ft_atoi_base (num, octal);
	write (1, "\n", 1);
	printf("The octal (01234567) result should be \n-20000000000 : \n");
	ft_atoi_base (num, deci_octal);
	write (1, "\n", 1);
	printf("The decimal result should be \n-2147483648 : \n");
	ft_atoi_base (num, deci);
	write (1, "\n", 1);
	printf("The hexadecimal result should be \n-80000000 : \n");
	ft_atoi_base (num, hexa);
	write (1, "\n", 1);
	write (1, "\n", 1);
	
	num = 2147483647;
	printf("The number is %d: \n", num);
	printf("The binary result should be \n1111111111111111111111111111111 : \n");
	ft_atoi_base (num, bin);
	write (1, "\n", 1);
	printf("The octal result should be \noffffffffff : \n");
	ft_atoi_base (num, octal);
	write (1, "\n", 1);
	printf("The octal (01234567) result should be \n17777777777 : \n");
	ft_atoi_base (num, deci_octal);
	write (1, "\n", 1);
	printf("The decimal result should be \n2147483647 : \n");
	ft_atoi_base (num, deci);
	write (1, "\n", 1);
	printf("The hexadecimal result should be \n7FFFFFFF : \n");
	ft_atoi_base (num, hexa);
	write (1, "\n", 1);
	write (1, "\n", 1);
*/}

