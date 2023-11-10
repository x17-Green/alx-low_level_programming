#ifndef STRUCT_DOG
#define STRUCT_DOG
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct dog - Dog structure
 * @name: Name category
 * @age: Age category
 * @owner: Owners category
 *
 * Dog Structures: this is for a dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
