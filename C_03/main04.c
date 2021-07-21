#include "ft_strstr.c"
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*haystack;
	char	*needle;
	
	haystack = "abcdefgcdeuipo";
	needle = "abc";
	printf("This is the output of your function: %s\n", ft_strstr(haystack, needle));
	printf("This is the output of strstr:        %s\n", strstr(haystack, needle));
	printf("This is the pointer outputed by your function: %p\n", ft_strstr(haystack, needle));
	printf("This is the pointer outputed by strstr:        %p\n", strstr(haystack, needle));
}
