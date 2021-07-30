#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int	argc, char	*argv[])
{
	int	i = 0;
	int	j;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	
		while (argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 90))
			{
				j = argv[1][i] - 'A' + 1;
				while (j > 0)
				{
					ft_putchar(argv[1][i]);
					j--;
				}
			}
			
			else if (argv[1][i] >= 97 && argv[1][i] <= 123)
			{
				j = argv[1][i] - 'a' + 1;
				while (j > 0)
				{
					ft_putchar(argv[1][i]);
					j--;
				}
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	
	return (0);
}
