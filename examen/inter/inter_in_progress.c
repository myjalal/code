#include <unistd.h>

int	main(int	argc, char	*argv[])
{
	int i = 0;
	int j = 0;
	
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[2][i])
	{
		if (argv[2][i] == argv[2][i-1])
			i++;
		else if (argv[1][j] == argv[1][j-1])
			j++;
		else if (argv[2][i] == argv[1][j])
		{
			write(1, &argv[1][j], 1);
			i++;
			j++;
		}
		else
			i++;
	}
	return (0);
}
