#include "ft_strncmp.c"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	s1 = "jello";
	s2 = "hello&d";
	n = 0;
	while ( n < 7)
	{
		printf("This should retrun %d: %d\n", strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
		n++;
	}
}

