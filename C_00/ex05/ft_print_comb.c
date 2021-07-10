#include <unistd.h>

int	main (void)
{
	char	x;
	x = '0';
	while (x <= '7')
	{
		write (1, &x, 1);
		x++;
	}
}
