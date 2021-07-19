#include <stdio.h>
#include <string.h>

int main(void)
{
	char	*str_0;
	char	*str_1;
	char	*str_2;
	
	str_0 = "abc";
	str_1 = "abcd";
	str_2 = "";
	printf("%d", strcmp(str_0, str_1));
}
