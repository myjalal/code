#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>


void	age_check(void)
{
	if (0)
	{
		write (1, "you are old!\n", 13);
	}
	else
	{
		write (1, "youre a child!\n", 16);
	}
}
int	main()
{
	age_check();
}

