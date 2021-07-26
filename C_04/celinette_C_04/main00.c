#include "ft_strlen.c"
#include <stdio.h>

int	ft_strlen (char *str);

int	main (void)
{
	char	*string;
	
	string = "I love potato";
	printf ("The string is: %s\n", string);
	printf ("The result should be 13: %d\n\n", ft_strlen(string));
	
	string = "123456789";
	printf ("The string is: %s\n", string);
	printf ("The result should be 9: %d\n", ft_strlen(string));
}
