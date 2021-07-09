#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha;
	char	odd;
	alpha = 'z';
	
	while (alpha >= 'a')
	{
		if (alpha % 2 == 0)
		{
			write(1, &alpha, 1);
		}
		else
		{
			odd = alpha - 32;
			write(1, &odd, 1);
		}
		alpha--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
