#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - Function to free Dog
  * @d: Pointer to dog d
  *
  * Return: always 0
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
