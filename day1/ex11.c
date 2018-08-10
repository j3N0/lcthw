#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		printf("point %d: %p\n", i, argv[i]);
		i++;
	}

	char *states[] = {
		"ca", "or",
		"wa", "te"
	};

	int num = 4;
	i = 0;
	while (i < num) {
		states[i] = argv[i];
		printf("states %d: %s\n", i, states[i]);
		printf("point %d: %p\n", i, states[i]);
		i++;
	}

	return 0;
}

