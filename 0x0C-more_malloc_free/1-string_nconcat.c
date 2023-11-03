#include "main.h"
/**
 * string_nconcat - Function concatenates two strings
 * @s1: String 1 pointer
 * @s2: String 2 pointer
 * @n: Number of bytes
 *
 * Return: NULL if fails, otherwise to new mem allocation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1;
	size_t len2;
	char *new_str;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;

	if (n >= len2)
	{
		n = len2;
	}

	new_str = (char *) malloc(len1 + n + 1);

	if (!new_str)
	{
		perror("Failed to allocate memory");
		return (NULL);
	}

	strncpy(new_str, s1, len1);
	new_str[len1] = '\0';
	strncat(new_str, s2, n);
	new_str[len1 + n] = '\0';
	return (new_str);
}
