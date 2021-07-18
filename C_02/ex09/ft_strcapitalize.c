#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int count;
	//int cap;
	
	count = 0;
	//cap = 0;
	if (str[count] >= 'a' && str[count] <= 'z')
	{
		str[count] -= 32;
		while (str[count + 1] >= 'A' && str[count + 1] <= 'Z')
		{
			str[count + 1] -= 32;
			count++;
		}
		count++;
	}
	return (str);
}

int	main(void)
{
	char	str_0[] = "abCdef";
	
	printf("%s", ft_strcapitalize(str_0));
}
