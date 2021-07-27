#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int nombre_j;
	int	*list_j;
	int	i;

	i = 0;
	printf("how many players do you need?");
	scanf("%d", &nombre_j);
	
	list_j = malloc(sizeof(int) * nombre_j);
	if (list_j == 0)
		exit(1);
	
	/*while (i < nombre_j)
	{
		printf("joueur %d -> numero %d\n", i + 1, i * 3);
		list_j[i] = i * 3;
		i++;
	}
	i = 0;*/
	while (i < nombre_j)
	{
		printf("[%d]", list_j[i]);
		i++;
	}
	free(list_j);
	
	return (0);
}
