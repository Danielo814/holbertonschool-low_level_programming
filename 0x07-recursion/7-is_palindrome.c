#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
        if (*s == '\0')
                return (0);
        s++;
        return (1 + _strlen_recursion(s));
}
/**
 *
 *
 *
 *
 *
 */
int helper(char *s, int len)
{
        if (len <= 1)
                return (1);
        else if (*s == *(s + len - 1))
                return (helper(s + 1, len - 2));
        else
                return (0);
}
/**
 *
 *
 *
 *
 *
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return(1);
	return (helper(s, len));
}
