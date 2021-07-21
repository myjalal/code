#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*haystack;
	const char	*needle;
	
	haystack = "abcdefgcdeuipo";
	needle = "";
	printf("%s", strstr(haystack,needle));
	printf("%s", strstr(haystack,needle));
}

