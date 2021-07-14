#include <unistd.h>
#include <stdio.h>

void	age_check(int	age)
{
	switch (age)
	{
		case 2:
			printf("hello");
			break;
		case 6:
			printf("hi");
			break;
		case 10:
			printf("hoho");
			break;
		default:
			printf("Really ?");
	}
}
int	main()
{
	int question;
	
	printf("Hey lad, How old are you?\n");
	scanf("%d", &question);
	age_check(question);
}

