#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	int c;
	int d;

	c = a / b;
	d = a % b;
	div = &c;
	mod = &d;
}

int	main(void)
{
	int x;
	int w;
	ft_div_mod(50, 2, &x, &w);
}
