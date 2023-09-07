#include "main.h"
/**
 * _atoi - main function to convert string to an integer
 * @s: function char variable pointer to string
 * Return: first integer found on the string (hi)
 */
int _atoi(char *s)
{
	int li, hi, pi;

	hi = 0;
	pi = -1;

	for (li = 0; s[li] != '\0'; li++)
	{
		if (s[li] == '-')
		{
			pi *= -1;
		}
		if (s[li] > 47 && s[li] < 58)
		{
			if (hi < 0)
			{
				hi = (hi * 10) - (s[li] - '0');
			}
			else
			{
				hi = (s[li] - '0') * -1;
			}
			if (s[li + 1] < 48 || s[li + 1] > 57)
			{
				break;
			}
		}
	}
	if (pi < 0)
	{
		hi *= -1;
	}
	return (hi);
}
