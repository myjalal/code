#include <unistd.h>
#include <stdio.h>
#include "ft_putnbr.c"

//void	ft_putchar(char c);
void	ft_putnbr (int nb);

int	main (void)
{
	printf("The result should be -123 : \n");
	ft_putnbr (-123);
	write (1, "\n", 1);
	
	printf("The result should be: 0\n");
	ft_putnbr (0);
	write (1, "\n", 1);
	
	printf("The result should be: -2147483648\n");
	ft_putnbr (-2147483648);
	write (1, "\n", 1);
	
	printf("The result should be: 2147483647\n");
	ft_putnbr (2147483647);
}
