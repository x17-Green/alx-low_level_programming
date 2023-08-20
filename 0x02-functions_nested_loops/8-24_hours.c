#include "main.h"
/**
 * jack_bauer - function printing every 24
 * hours and 59 munites
 */
void jack_bauer(void)
{
	int hr, mn;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}
