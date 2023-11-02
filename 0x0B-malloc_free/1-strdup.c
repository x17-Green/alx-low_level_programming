#include "main.h"
#include "string.h"
/**
 * _strdup - Function that returns a pointer to
 * new allocated space in memory
 * @str: String to duplicate
 *
 * Return: Diplicate string
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;
	new_str = (char *) malloc(length * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
