#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	first[] = "12345";
	char	last[] = "abcdefg";
	int		r;
	int		size = 0;
	char	buffer[size];

	strcpy (buffer,first);
	r = strlcat (buffer,last,size);
	puts(buffer);
	printf("Value returned: %d\n",r);
	if( r > size )
		puts("String truncated");
	else
		puts("String was fully copied");
	return(0);
}
