#include "holberton.h"
/**
 * delim - separators of words
 *
 * @c: characters to check
 *
 * Return: 0
 */
int delim(char c)
{
	if (c == ' ' || c == '\n' || c == ',' || c == ';'
	    || c == '.' || c == '!' || c == '?' || c == '"'
	    || c == '\t' || c == ')' || c == '}' || c == '{' || c == '(')
		return (1);
	return (0);
}
/**
 * cap_string - function that capatalizes all words of string
 *
 * @s: characters passed in
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int a;

	a = 0;
	if (s[a] >= 'a' && s[a] <= 'z')
		s[a] -= 32;
	while (s[a])
	{
		if (delim(s[a]) == 1 && (s[a + 1] >= 'a' && s[a + 1] <= 'z'))
		{
			s[a + 1] -= 32;
			a++;
		}
		else
			a++;
	}
	return (s);
}
