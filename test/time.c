#include <stdio.h>
#include <string.h>

void	nespresso (void)
{
	char	nespresso_time[9];
	char	nes_ans[3];

	printf(" Hi baby, do you still want to go to Nespresso today?\n");
	printf(" Enter Y or N\n");
	fgets(nes_ans, 3, stdin);
	printf("\n");
	
	if (nes_ans == 'Y')//(strcmp(nes_ans, "Y")|| strcmp(nes_ans,"y"))
	{
		printf(" At what time would you like to go to nespresso?\n");
		fgets(nespresso_time, 9, stdin);
		printf("\n Ok, tell Pumpkin that you want to go at %s \n", nespresso_time);
	}
	else if (nes_ans == 'N')//(strcmp(nes_ans,"N") || strcmp(nes_ans,"n"))
	{
		printf(" Ok! \n");
	}
	else
	{
		printf(" I don't understand your answer.\n");
		printf(" Haiyaaa baby!\n");
	}
}

void	lunch (void)
{
	char	food[50];
	char	lunch_time[30];
	
	printf(" Oh but there's more!! \nWhat would you like for lunch?\n");
	fgets(food, 50, stdin);
	printf("\n At what time do you want to eat %s ?\n", food);
	fgets(lunch_time, 30, stdin);
	printf("\n Ok, tell Pumpkin that you want to go at %s \n", lunch_time);
}

int	main (void)
{
	printf("\n \n Dear Mr. Potato, \n \n");
	printf(" First of all, I need to say that Pumpkin is soooo bad at hiding anything omg\n");
	printf("(\\_/) \n(°_°) \n / <3 \n \n");
	nespresso();
	lunch();
	printf(" Pumpkin wants a kiss\n");
	printf("\n\n\n****** This is the END of this code ******\n\n\n");
}

/*
 #include <stdio.h>
 int main() {
 char name[10];
 printf("Enter your  name plz: ");
 fgets(name, 10, stdin);
 printf("My name is %s ",name);
 return 0;}
 */
