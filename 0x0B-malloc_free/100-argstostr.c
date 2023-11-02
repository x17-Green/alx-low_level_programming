#include "main.h"
/**
 * argstostr - Fucntion that concatenates all the arguments
 * @ac: Argument count
 * @av: Argument vector string
 * Return: NULL if it fails, otherwise pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int i;
	size_t len;
	char *p;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	str = (char *) malloc(len + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	p = str;

	for (i = 0; i < ac; i++)
	{
		p = stpcpy(p, av[i]);
		*p++ = '\n';
	}
	*p = '\0';
	return (str);
}
