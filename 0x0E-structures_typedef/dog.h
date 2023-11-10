#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * struct dog - Dog structure
 * @name: Name category
 * @age: Age category
 * @owner: Owners category
 *
 * Dog Structures: this is for a dog structure
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog *dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(struct dog_t *dog);

#endif
