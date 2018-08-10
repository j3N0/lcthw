#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_letter (char arg[], int length);
void print_arguments (int argc, char *argv[]);

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++) {
		print_letter (argv[i], strlen(argv[i]));
	}

	return 0;
}


void print_letter (char arg[], int length)
{
	int i = 0;

	for (i = 0; i < length; i++) {
		char ch = arg[i];

		if (isalpha(ch) || isblank(ch)) {
			printf("'%c' == %d ", ch, ch);
		}
	}
	printf("\n");
}


