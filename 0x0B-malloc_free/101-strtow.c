#include "main.h"
/**
 * strtow - Function that splits strings into words
 * @str: Pointer to string
 *
 * Return: NULL if str is empty or NULL
 * or if function fails, return NULL
 */
char **strtow(char *str)
{
	int i;
	int word_count = 0;
	int char_count = 0;
	int current_word = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			word_count++;
		}
		else
		{
			char_count++;
		}
	}
	word_count++;

	words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	words[word_count] = NULL;

	for (i = 0; i < char_count; i++)
	{
		if (str[i] == ' ')
		{
			str[i] = '\0';
			words[current_word++] = &str[i + 1];
		}
	}

	words[current_word] = &str[char_count];
	return (words);
}
