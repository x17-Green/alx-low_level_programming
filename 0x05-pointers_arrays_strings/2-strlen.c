#include "main.h"
/**
 * _strlen - main function
 * @s: a variable pointer
 * Return: always (0)
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
