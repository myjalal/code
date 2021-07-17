#include <unistd.h>
void	ft_putchar (char c);
void	ft_putstr (char *str);
int main (void)
{
	char string[] = "Hello world";
	
	ft_putstr(&string[0]);
}
