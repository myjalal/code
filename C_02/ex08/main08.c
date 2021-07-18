#include "ft_strlowcase.c"
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "ABC";
	char	str_1[] = "!1 ccg AGG mjeUTYFUhc";

	printf("this should be abc: %s\n", ft_strlowcase(str));
	printf("this should be !1 ccg agg mjeutyfuhc \n%s\n", ft_strlowcase(str_1));
}
