#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}
void ft_putstr(int *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
int main (void)
{
	int *string;
	string = '123456';
	ft_putstr(string);
}
