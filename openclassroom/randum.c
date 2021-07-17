#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int	g_MAX = 100;
const int	g_MIN = 1;
int	myster;
int	guess;

int get_input(void)
{
	printf("guess a number between 1 and 100\n");
	scanf("%d", &guess);
}
int	main(void)
{
	myster = 0;
	guess = 0;
	srand(time(NULL));
	myster = (rand() % (g_MAX - g_MIN + 1)) + g_MIN;
	printf("%d", myster);
	get_input();
	while (guess >= 1 && guess <= 100)
	{
		if (guess == myster)
		{
			printf("you found it ! good job!!\n");
			return (0);
		}
		else if (guess > myster)
		{
			printf("your number is too big, try again!\n");
			get_input();
		}
		else
		{
			printf("your number is too small, try again!\n");
			get_input();
		}
		//guess = ;
	}
}
