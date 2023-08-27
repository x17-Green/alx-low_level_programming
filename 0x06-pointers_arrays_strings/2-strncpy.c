#include "main.h"
/**
 * _strncpy - main function to copy a string from 0 of `dest`
 * @dest: a char variable containing strings
 * @src: a char variable containing strings
 * @n: an integer string to copy char variables
 * Return: `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num;

	for (num = 0; num < n && src[num] != '\0'; num++)
	{
		dest[num] = src[num];
	}
	for (; n > num; num++)
	{
		dest[num] = '\0';
	}
	return (dest);
}
