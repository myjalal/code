#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int x;
	int w;
	ft_div_mod(50, 2, &x, &w);
}

