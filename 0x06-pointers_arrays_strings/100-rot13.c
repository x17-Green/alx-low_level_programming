#include "main.h"
/**
 * rot13 - function to rotate characters in 13 places
 * @s: pointer to char string variable
 * Return: string `s` rotated
 */
char *rot13(char *s)
{
	int li;
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwzyzabcdefghijklm";

	for (li = 0; s[li] != '\0'; li++)
	{
		if ((s[li] > 'A' && s[li] < 'Z') || (s[li] > 'a' && s[li] < 'z'))
		{
			s[li] = (s[li] - 'A' > 25) ?
				storel[s[li] - 'a'] : storeh[s[li] - 'A'];
		}
	}
	return (s);
}
