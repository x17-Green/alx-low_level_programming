#include "main.h"
/**
 * rev_string - main function to print reverse strings
 * @s: pointer variables with string
 */
void rev_string(char *s)
{
	int n1, n2, n3;
	char li;

	for (n1 = 0; s[n1] != '\0'; n1++)
	{
		;
	}
	n3 = n1;
	for (n1--, n2 = 0; n2 < n3 / 2; n1--, n2++)
	{
		li = s[n2];
		s[n2] = s[n1];
		s[n1] = li;
	}
}
