#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about dog
 * @name: input name of dog
 * @age: age of dog
 * @owner: input owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *big, char *loud);
int _strlen(char *a);

#endif
