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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
