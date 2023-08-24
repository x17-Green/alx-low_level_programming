#include "main.h"
/**
 * *_strcpy - main function
 * @dest: pointer to a string char type
 * @src: pointer to a string char type
 * Description: copying the string pointed by the pointer
 * `src` to the buffer point by `dest`
 * Return: goes top pointer `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int li;

	for (li = 0; src[li] != '\0'; li++)
	{
		dest[li] = src[li];
	}
	dest[li] = '\0';
	return (dest);
}
