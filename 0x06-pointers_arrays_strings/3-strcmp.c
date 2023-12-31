#include "main.h"
/**
 * _strcmp - function for comparing two strings
 * @s1: an array string
 * @s2: an array string
 * Return: negative if s1 lesser than s2, 0 if matching/positive int
 */
int _strcmp(char *s1, char *s2)
{
	int num;

	for (num = 0; s1[num] != '\0' || s2[num] != '\0'; num++)
	{
		if (s1[num] != s2[num])
		{
			return (s1[num] - s2[num]);
		}
	}
	return (0);
}
