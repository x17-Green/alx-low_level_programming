#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - New dog function
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: New dog owner
 *
 * Return: New god struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog = NULL;

	if (name != NULL && owner != NULL)
	{
		cutie_dog = malloc(sizeof(dog_t));

		if (cutie_dog == NULL)
		{
			return (NULL);
		}

		cutie_dog->name = strdup(name);
		cutie_dog->owner = strdup(owner);
		cutie_dog->age = age;
	}

	return (cutie_dog);
}
