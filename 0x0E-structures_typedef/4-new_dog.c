#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		fprint(stderr, "Error, cannot allocate memory\n");
		exit(1);
	}

	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
