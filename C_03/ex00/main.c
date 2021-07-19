#include "ft_strcmp.c"
#include <stdio.h>
/*
return an integer greater than, equal to, or less than 0,
 according as the string s1 is greater than, equal to, or less than the string s2
 */
int	ft_strcmp(char *s1, char *s2);

int	main (void)
{
	char	*string1;
	char	*string2;
	
	string1 = "abc";
	string2 = "abc";
	printf ("string 1: %s\n", string1);
	printf ("string 2: %s\n", string2);
	printf ("Answer should be 0: %d\n\n", ft_strcmp(string1, string2));
	
	string1 = "abes";
	string2 = "abcd";
	printf ("string 1: %s\n", string1);
	printf ("string 2: %s\n", string2);
	printf ("Answer should be 2: %d\n\n", ft_strcmp(string1, string2));
	
	string1 = "abc";
	string2 = "ab";
	printf ("string 1: %s\n", string1);
	printf ("string 2: %s\n", string2);
	printf ("Answer should be 99: %d\n\n", ft_strcmp(string1, string2));
	
	string1 = "ab";
	string2 = "abc";
	printf ("string 1: %s\n", string1);
	printf ("string 2: %s\n", string2);
	printf ("Answer should be -99: %d\n\n", ft_strcmp(string1, string2));
}
