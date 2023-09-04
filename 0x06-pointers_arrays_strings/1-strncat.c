#include "main.h"
/**
 * _strncat - main function for concatenate
 * @dest: char pointer string variable
 * @src: another char pointer string variable
 * @n: int variable in a pointer function
 * Return: runtun pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int li, cc;

	for (li = 0; dest[li] != '\0'; li++)
	{
		;
	}
	for (cc = 0; src[cc] != '\0' && n > 0; cc++, n--, li++)
	{
		dest[li] = src[cc];
	}
	return (dest);
}
