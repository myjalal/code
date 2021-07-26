#include <stdio.h>

int ft_find_next_prime(int nb)
{
	int i;
	int	res;

	i = 1;
	if (nb < 2 && nb >= 0)
		return (2);
	if (nb == 2)
		return (2);
	if (nb == 3)
		return (3);
	while ((i * 6) - 1 != nb )
	{
		if (nb <= (i * 6) - 1)
			return ((i * 6) - 1);
		i++;
	}
	return (nb);
}

int main(void)
{
	printf("%d\n", ft_find_next_prime(12));
	return (0);
}

