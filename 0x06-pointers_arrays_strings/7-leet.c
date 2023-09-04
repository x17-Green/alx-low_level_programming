#include "main.h"
/**
 * leet - function to encode a character to 1337
 * @s: a string to replace characters
 * Return: encoded `s` string
 */
char *leet(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		while (s[n] == 'a' || s[n] == 'A')
		{
			s[n] = '4';
		}
		while (s[n] == 'e' || s[n] == 'E')
		{
			s[n] = '3';
		}
		while (s[n] == 'o' || s[n] == 'O')
		{
			s[n] = '0';
		}
		while (s[n] == 't' || s[n] == 'T')
		{
			s[n] = '7';
		}
		while (s[n] == 'l' || s[n] == 'L')
		{
			s[n] = '1';
		}
	}
	return (s);
}
