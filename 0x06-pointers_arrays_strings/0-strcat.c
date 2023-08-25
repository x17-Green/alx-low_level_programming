#include "main.h"
/**
 * _strcat - main function
 * @dest: pointer string to concatenate
 * @src: another string (char)
 * Return: return the pointer
 */
char *_strcat(char *dest, char *src)
{
	int li, cc;

	for (li = 0; dest[li] != '\0'; li++)
	{
		;
	}
	for (cc = 0; src[cc] != '\0'; cc++)
	{
		dest[li] = src[cc];
		li++;
	}
	dest[li] = '\0';
	return (dest);
}
