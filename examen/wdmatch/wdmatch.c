#include <unistd.h>

int	main(int	argc, char	*argv[])
{
	int i = 0;
	int j = 0;
	int ln = 0;
	
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][ln])
		ln++;
	while (argv[2][i])
	{
		if (argv[1][j] == argv[2][i])
		{
			j++;
			i++;
		}
		else
			i++;
	}
	if (ln == j)
	{
		i = 0;
		while(argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
