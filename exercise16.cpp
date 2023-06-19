#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_creat(char *name, int age, int height, int wieght)
{
	struct Person *who = malloc(sizeof(struct Person));

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	
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
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n",who->weight);
}

int main(){
	//make two people structures
	struct Person *joe = Person_creat("Joe Alex", 32, 64, 140);
	struct Person *frank = Person_creat("Frank Blank", 20, 72, 180);
	
	//print them out and where they are in memory
	printf("Joe is at memory location %p:\n",joe);
	Person_print(joe);	
}
