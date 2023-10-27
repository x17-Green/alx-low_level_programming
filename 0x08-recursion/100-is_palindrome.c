#include "main.h"
/**
 * find_strlen - Function to returns the length of a string
 * @s: Pointer to string
 *
 * Return: String length
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}
/**
 * check_palindrome - Function to check if a string
 * is a palindrome
 * @s: Pointer to a string
 * @len: String length
 * @index: String to be checked.
 *
 * Return: 1 if string is palindrome otherwise 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
/**
 * is_palindrome - If a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
