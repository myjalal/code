#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int res;
	
	while(str[i] && str[i] > )
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int main(void)
{
	printf("%d", ft_atoi("1234a56"));
	return (0);
}
