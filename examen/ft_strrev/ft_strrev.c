#include <stdio.h>

char	*strrev(char *str)
{
	int		i;
	int		j;
	char	temp;
	
	i = 0;
	j = -1;
	while (str[i])
		i++;
	printf("str len = %d\n", i);
	
	while (++j < --i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return (str);
}

int	main(void)
{
	char	str[] = {'a','b','c','d','e','\0'};
	
	printf("%s", strrev(str));
}
