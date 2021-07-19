//#include <stdio.h>
//
int ft_strcmp(char *s1, char *s2)
{
	int	count;
	int	diff;
	
	diff = 0;
	count = 0;
	while (s1[count] != '\0' /*&& s2[count] != '\0'*/)
	{
		if (s1[count] == s2[count])
			count++;
		else
			diff = s1[count] - s2[count];
	}
	return (diff);
	
}

/*int main(void)
{
	char	*str_0;
	char	*str_1;
	char	*str_2;
	
	str_0 = "abz";
	str_1 = "abcdj";
	str_2 = "";
	printf("%d", ft_strcmp(str_0, str_1));
}*/
