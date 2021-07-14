#include <unistd.h>

void	ft_putstr(char *str);

int main (void)
{
	char string[] = "Hello world";
	
	ft_putstr(&string);
}
