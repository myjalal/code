#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
int	main(void)
{
	int decompte;
	int counter;
	decompte = 9;
	counter = 0;
	while (decompte >= 0)
	{
		ft_putchar(counter);
		counter++;
		decompte--;
	}
	return (0);
}

