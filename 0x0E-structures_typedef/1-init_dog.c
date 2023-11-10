#include "dog.h"
/**
 * init_dog - Function for dog structure
 *
 * @d: Pointer to struct data
 * @name: Char data struct type
 * @age: Float struct data type
 * @owner: Char struct data type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
