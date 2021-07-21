#include "ft_strcapitalize.c"
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str_0[] = "i lOve 42qUEbec";
	
	printf("this should be I Love 42quebec: \n%s\n", ft_strcapitalize(str_0));
}


