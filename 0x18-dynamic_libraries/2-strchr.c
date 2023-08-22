#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @c: char in s
 * @s: string
 * Return: first occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	if (s[x] == c)
		return (s + x);
	else
		return ('\0');
}
