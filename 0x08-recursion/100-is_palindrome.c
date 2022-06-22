#include "main.h"

int _strlen_recursion(char *s);
int palindrome(char *s, int i, int l);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - checks if string is palindrome
 * @s: string
 * @i: iterator
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int palindrome(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	else if (i >= l)
		return (1);
	else
		return (palindrome(s, i + 1, l - 1));
}
