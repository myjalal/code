#include <unistd.h>
#include <stdio.h>

int	main (void)
{
	int	digit;
	int	counter;

	digit = 0;
	counter = 3;
	while (digit != 40 && counter >= 0 )
	{
		if (counter == 0)
		{
			printf("You failed \n");
			return (0);
		}
		else
		{
			printf ("write 40, you have %d tries \n", counter);
			scanf ("%d", &digit);
			counter--;
		}
	}
}
