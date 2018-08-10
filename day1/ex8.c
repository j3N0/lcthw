#include <stdio.h>
	char full_name[] = {
		'W', 'e', 'n',
		' ', 'H', 'a',
		'A'
	};

int main(void)
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Hao";

	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %u\n", sizeof(areas));
	printf("The number of ints in areas: %u\n",
			sizeof(areas) / sizeof(int));
	printf("The first areas is %d.\n", areas[10]);
	printf("The sizeof int is %u\n", sizeof(char));
	printf("The sizeof name (char[]): %u\n", sizeof(name));
	printf("The sizeof full_name (char[]): %u\n", sizeof(full_name));

	
	return 0;

}
