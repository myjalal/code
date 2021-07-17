#include <unistd.h>
#include <stdio.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}
void	ft_strlen(char *str)
{
	int	counter;
	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	//printf("%d", counter);
	while (counter > 0)
	{
		str += counter;
		ft_putchar(*str);
		counter--;
	}
	//                                         printf("%d", counter);
}

int main (void)
{
	char *string;
	string = "Hello world";
	ft_strlen(string);
	return (0);
}
