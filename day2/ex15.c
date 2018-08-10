#include <stdio.h>

int main(void)
{
	int ages[] = {23, 42, 12, 89, 2};
	char *names[] = {
		"Alan", "Frank",
		"Mary", "John", "Lisa"
	};

	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	int *cur_age = ages;
	char **cur_name = names;

	for(i = count -1; i >= 0; i--) {
		printf("%s is %d years old.\n",
				*(cur_name+i), *(cur_age+i));
	}
	printf("-----\n");

	for(i = count -1; i >= 0; i--) {
		printf("%s is %d years old.\n",
				cur_name[i], cur_age[i]);
	}
	printf("-----\n");

	for(cur_name = names + count -1, cur_age = ages + count - 1;
			cur_age > ages;
			cur_age--, cur_name--)
	{
		printf("%s is %d years old.\n",
				*cur_name, *cur_age);
	}

	for (cur_name = names; (cur_name-names) < count; cur_name++) {
		printf("%s is allocated %p ", *cur_name, cur_name);
		printf("sizeof %s : %lu\n", *cur_name, sizeof(*cur_name)); 
	}

	printf("Alan allocate : %p\n", "Alan");

	return 0;
}
