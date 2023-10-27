#include "main.h"
/**
 * strlen_no_wilds - Function returns string
 * lenth escaping wildcards
 * @str: Pointer to string
 *
 * Return: Length
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}

	return (len);
}
/**
 * iterate_wild - Function iterates string on a wildcard,
 * stops when not wildcard
 * @wildstr: String to be iterated through
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - Function Checks if string matches
 * another string containing wildcards
 * @str: String to check and matched
 * @postfix: Postfix
 *
 * Return: If check maches are identical to pointer
 * located at the end of postfix
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - Function compares two strings
 * @s1: String 1
 * @s2: String 2 (may contain wildcards)
 *
 * Return: 1 if strings are identical
 * Otherwise - 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
