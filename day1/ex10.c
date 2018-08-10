#include <stdio.h>

int main(int argc, char *argv[])
{
	char *a = NULL;
	argv[1] = a;
	printf("%s\n", a);

	return 0;
}
