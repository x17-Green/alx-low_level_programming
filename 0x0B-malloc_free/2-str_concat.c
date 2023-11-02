#include "main.h"
/**
 * str_concat - Function to concatenate two srings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate to second string
 *
 * Return: NULL if failed
 * Otherwise - return pointer to new memory allocation
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t s1_len;
	size_t s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	result = (char *) malloc(s1_len + s2_len + 1);

	if (result == NULL)
	{
		perror("malloc");
		return (NULL);
	}
	strcpy(result, s1);
	strcpy(result + s1_len, s2);
	return (result);
}
