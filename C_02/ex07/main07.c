#include <stdio.h>
char	*ft_strupcase(char *str);

int	main(void)
{
	char	str_1[] = "abc";
	char	str_2[] = "!ab cd23";
	char	str_3[] = " ";

	printf("this should be ABC : %s\n", ft_strupcase(str_1));
	printf("this should be !AB CD23 : %s\n", ft_strupcase(str_2));
	printf("this should be a space betweet 11: 1%s1\n", ft_strupcase(str_3));
}
