#include <stdio.h>

int	main(void)
{
	int	table[4];
	
	table[0] = 10;
	table[1] = 23;
	table[2] = 505;
	table[3] = 69;
	
	printf("This is supposed to write the adress of the first box of the table %d\n", *(table + 3));
	printf("this is supposed to write the first box of the table %d", table[2]);
}
