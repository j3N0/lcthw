#include <stdio.h>

int main(void)
{
	char c[] = {'a','d','d'};
	char name[4] = {'a', 'a', 'a', 'a'};
	char *b = "hello";
	printf("sizeof name %lu\n", sizeof(name));
	printf("name: %s\n", name);

	return 0;
}
