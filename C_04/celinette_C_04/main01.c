#include "ft_putstr.c"
#include <unistd.h>
#include <stdio.h>

int	main (void)
{
	char	*string;
	
	string = "I am a pumpkin";
	printf ("The string is I am a pumpkin\n");
	printf ("The result is: \n");
	ft_putstr (string);
}
