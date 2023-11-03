#include "main.h"
/**
 * _calloc - Function allocates memory for an array
 * @nmemb: Memory allocated to array
 * @size: Bytes of each mem allocation
 *
 * Return: NULL if size or nmemb == 0, otherwise NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);
	return (ptr);
}
