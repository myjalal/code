#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
int	main(int	argc, char *argv[])
{
	int	i;
	
	i = 0;
	if (argc != 2)
	{
		write(1, "argc-not-2-z\n", 13);
		return (0);
	}

	while (argv[1][i])
	{
		if (argv[1][i] == 'z')
		{
			write(1, &argv[1][i], 1);
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	write(1, "no-z\n", 5);
	return (0);
}
