#include "main.h"
/**
 * print_alphabet_x10 - Print alphabets function
 */
void print_alphabet_x10(void)
{
	int line;
	char ch;

	for (line = 1; line <= 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
