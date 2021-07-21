#include "ft_strncmp.c"
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	s1 = "hello";
	s2 = "hello&d";
	n = 5;
	printf("%d", ft_strncmp(s1, s2, n));
}
