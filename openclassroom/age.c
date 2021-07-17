#include <unistd.h>
#include <stdio.h>

void	age_check(int	age)
{
	(age >= 18) ? write (1, "you are old!\n", 13) : write (1, "youre a child!\n", 16);
}	
int	main()
{
	int question;
	
	printf("Hey lad, How old are you?\n");
	scanf("%d", &question);
	age_check(question);
}
