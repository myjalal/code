#include <stdio.h> // to remove

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		mid;
	char	temp;
	
	i = 0;
	j = 0;
	while (str[i])
		i++;
	mid = i / 2;
	while(j < mid)
	{
		i--;
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j++;
		
	}
	str[j+i] = '\0';
	return (str);
}

int	main(void)
{
	char	str[] = "abcdefg";
	
	//str[] = {'a', 'b', 'c', 'd', 'e', '\0'}
	printf("%s", ft_strrev(str));
}
