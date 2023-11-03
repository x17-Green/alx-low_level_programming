#include "main.h"
/**
 * malloc_checked - Function allocates memory using malloc
 * @b: Unsigned int variable to allocate
 *
 * Return: Memory location
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
