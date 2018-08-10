#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
};

struct Person *Person_create(char *name, int age)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	
	who->name = strdup(name);
	//who->name = name;
	who->age = age;

	return who;
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
	
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
}

int main(void)
{
	struct Person *wen = Person_create("Wen", 20);

	printf("wen is at memory location %p\n", wen);
	printf("wen->name is at memory location %p\n", wen->name);
	printf("sizeof Person is %lu\n", sizeof(struct Person));
	Person_print(wen);

	//Person_destroy(wen);

	return 0;
}
