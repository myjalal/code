#include <unistd.h>

void 	rev_alpha(void)
{
	char	alpha;
	char	beta;

	alpha = 'z';
	while (alpha >= 'a')
	{
		if (alpha % 2 == 0)
		{
			write (1, &alpha, 1);
		}
		else
		{
			beta = alpha - 32;
			write (1, &beta, 1);
		}
		alpha--;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	rev_alpha();
}
