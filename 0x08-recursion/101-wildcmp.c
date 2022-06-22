#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 1 if identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '\0')
		return (0);
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else
		return (0);
}
